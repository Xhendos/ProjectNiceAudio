#include <xc.h>

#include "HCMS29.h"                                 
#include "font.h"                                   /* Contains all the fonts and some custom ones */

#define _XTAL_FREQ  4000000

void    HCMS29struct_s(struct sfr_member_t *reg, volatile char *address, const int mask)
{
    reg->address = address;
    reg->mask = mask;
}


void    HCMS29ctl0(struct matric_29 device, config0 data)
{
    *device.RS.address |= (1u << device.RS.mask);    /* Set the register select pin to logic HIGH */
    *device.CE.address &= ~(1u << device.CE.mask);   /* Clear the chip enable to logic LOW so we can write to the display */
            
    SSPBUF = (unsigned char) ((0 << 7) | (data.sleep << 6) |          
            (data.current << 4) | (data.brightness << 0));

    while(!PIR1bits.SSPIF);                         /* While the MSSP module is still sending a byte, let's wait */
    
    *device.CE.address |= (1u << device.CE.mask);    /* Set the chip enable to logic HIGH so de data will be latched in the control word */
    PIR1bits.SSPIF = 0;                             /* Clear the interrupt flag AFTER setting the CE pin (this has higher priority */
}


void    HCMS29ctl1(struct matric_29 device, config1 data)
{
    *device.RS.address |= (1u << device.RS.mask);    /* Set the register select pin to logic HIGH */
    *device.CE.address &= ~(1u << device.CE.mask);   /* Clear the chip enable to logic LOW so we can write to the display */
    
    SSPBUF = (unsigned char) ((1 << 7) | (0 << 6) | 
            (0 << 5) | (0 << 4) | 
            (0 << 3) | (0 << 2) | 
            (data.prescaler << 1) | (data.data_out));
    while(!PIR1bits.SSPIF);                         /* While the MSSP module is still sending a byte, let's wait */
    
    *device.CE.address |= (1u << device.CE.mask);    /* Set the chip enable to logic HIGH so de data will be latched in the control word */
    PIR1bits.SSPIF = 0;                             /* Clear the interrupt flag AFTER setting the CE pin (this has higher priority */
}


void    HCMS29send(struct matric_29 device, char c)
{
    *device.RS.address &= ~(1u << device.RS.mask);
    *device.CE.address &= ~(1u << device.CE.mask);
    
    for(unsigned int i = 0; i < 5; i++)
    {               
//        if(i != 0)                                  /* Exclude 0 in case SSPIF was no set before the function call */
//        {
//            while(!PIR1bits.SSPIF);                 /* While we did not send the last message successfully */
//            PIR1bits.SSPIF = 0;                     /* We sent the last message successfully, turn the flag off */
//        }
        __delay_us(100);
        SSPBUF = CHARACTER_SET[(c * 5u) + i];
    }

    /* removed __delay_ms(1); */
    
    *device.CE.address |= (1u << device.CE.mask);    /* Turn on the CE pin (so the data is latched and we can see the LEDs) */
}

void    HCMS29send_string(struct matric_29 device, const unsigned char *str)
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        HCMS29send(device, str[i]);
    }
}

void    HCMS29send_number(struct matric_29 device, char n) 
{
    if (n >= 10) 
    {
        HCMS29send(device, (n / 10u) + '0');
        /*__delay_ms(1); unnecessary since we have a delay in HCMS29send() already */
        HCMS29send(device, (n % 10u) + '0');
    } else 
    {
        HCMS29send(device, ' ');
       /*__delay_ms(1); unnecessary since we have a delay in HCMS29send() already */
        HCMS29send(device, n + '0');
    }
}

void    HCMS29wakeup(struct matric_29 device)
{
    config0 config;

    config.brightness = PWM36;                      /* Set brightness to 60% */
    config.current = 0b00;                          /* Default at power-up */
    config.sleep = 0b1;                             /* Do not sleep */
    
    
    *device.RST.address |= (1u << device.RST.mask); /* Set the reset pin to logic HIGH (so it does not reset again) */
    *device.RS.address &= ~(1u << device.RS.mask);  /* Select  the dot register */
    *device.CE.address &= ~(1u << device.CE.mask);  /* Enable chip (and RS will be latched, because falling edge of this pin) */
    
    /* Should probably be (320 / 8) is 40 */
    for(int i = 0; i < 320; i++)                    
    {
        SSPBUF = 0b00000000;                        /* Each clock send 0s to the dot register */
    }
    
    *device.CE.address |= (1u << device.CE.mask);   /* Set to logic high so data will be latched. */
    HCMS29ctl0(device, config);                     /* Export the sleep bit logic high to control register 0 */
}


