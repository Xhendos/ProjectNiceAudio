#ifndef _FONT_H
#define _FONT_H

const char TESTARRAY[] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40
};

const char CHARACTER_SET[/*640*/] = {
    0x08, 0x1C, 0x3E, 0x7F, 0x00, //driehoek naar links
    0x30, 0x45, 0x48, 0x40, 0x30, //onderste boven ? (�)
    0x45, 0x29, 0x11, 0x29, 0x45, // x bar
    0x80, 0x90, 0x7E, 0x90, 0x80, // legogo29 github avatar
    0x00, 0x20, 0x2E, 0x20, 0x00, // sinscerly github avatar
//    0x7D, 0x09, 0x11, 0x21, 0x7D, // N bar
//    0x7D, 0x09, 0x05, 0x05, 0x7D, // n bar
    0x38, 0x44, 0x44, 0x38, 0x44, // alfa
    0x7E, 0x01, 0x29, 0x2E, 0x10, // beta
    0x30, 0x4A, 0x1D, 0x49, 0x30, // gamma
    0x60, 0x50, 0x48, 0x50, 0x60, // delta (hoofdletter)
    0x1E, 0x04, 0x04, 0x38, 0x40, // eta
    0x3E, 0x49, 0x49, 0x49, 0x3E, // theta
    0x62, 0x14, 0x08, 0x10, 0x60, // lambda
    0x40, 0x3C, 0x20, 0x20, 0x1C, // mu
    0x08, 0x7C, 0x04, 0x7C, 0x02, // pi
    0x38, 0x44, 0x44, 0x3C, 0x04, // sigma (klein)
    0x41, 0x63, 0x55, 0x49, 0x41, // sigma (groot)
    
    0x10, 0x08, 0x78, 0x08, 0x04, // tau
    0x18, 0x24, 0x7E, 0x24, 0x18, // phi
    0x5E, 0x61, 0x01, 0x61, 0x5E, // omega
    0x78, 0x14, 0x15, 0x14, 0x78, // A ring
    0x38, 0x44, 0x45, 0x3C, 0x40, // a ring
    0x78, 0x15, 0x14, 0x15, 0x78, // A umlaut
    0x38, 0x48, 0x44, 0x3D, 0x40, // a umlaut
    0x3C, 0x43, 0x42, 0x43, 0x3C, // O umlaut
    0x38, 0x45, 0x44, 0x45, 0x38, // o umlaut
    0x3C, 0x41, 0x40, 0x41, 0x3C, // U umlaut
    0x38, 0x42, 0x40, 0x42, 0x38, // u umlaut
    0x08, 0x08, 0x2A, 0x1C, 0x08, // pijl rechts
    0x20, 0x7E, 0x02, 0x02 ,0x02, // wortel
    0x12, 0x18, 0x15, 0x10, 0x00, // kwadraat
    0x48, 0x7E, 0x49, 0x41, 0x42, // pond
    0x01, 0x12, 0x7C, 0x12, 0x01, // yenn
    
    0x00, 0x00, 0x00, 0x00, 0x00, // space
    0x00, 0x5F, 0x00, 0x00, 0x00, // !
    0x00, 0x03, 0x00, 0x03, 0x00, // "
    0x14, 0x7F, 0x14, 0x7F, 0x14, // #
    0x24, 0x2A, 0x7F, 0x2A, 0x12, // $
    0x23, 0x13, 0x08, 0x64, 0x62, // %
    0x36, 0x49, 0x56, 0x20, 0x50, // &
    0x00, 0x0B, 0x07, 0x00, 0x00, // '
    0x00, 0x00, 0x3E, 0x41, 0x00, // (
    0x00, 0x41, 0x3E, 0x00, 0x00, // )
    0x08, 0x2A, 0x1C, 0x2A, 0x08, // *
    0x08, 0x08, 0x3E, 0x08, 0x08, // +
    0x00, 0x58, 0x38, 0x00, 0x00, // ,
    0x08, 0x08, 0x08, 0x08, 0x08, // -
    0x00, 0x30, 0x30, 0x00, 0x00, // .
    0x20, 0x10, 0x08, 0x04, 0x02, // /
    
    0x3E, 0x51, 0x49, 0x45, 0x3E, // 0
    0x00, 0x42, 0x7F, 0x40, 0x00, // 1
    0x62, 0x51, 0x49, 0x49, 0x46, // 2
    0x22, 0x41, 0x49, 0x49, 0x36, // 3
    0x18, 0x14, 0x12, 0x7F, 0x10, // 4
    0x27, 0x45, 0x45, 0x45, 0x39, // 5
    0x3C, 0x4A, 0x49, 0x49, 0x30, // 6
    0x01, 0x71, 0x09, 0x05, 0x03, // 7
    0x36, 0x49, 0x49, 0x49, 0x36, // 8
    0x06, 0x49, 0x49, 0x29, 0x1E, // 9
    0x00, 0x36, 0x36, 0x00, 0x00, // :
    0x00, 0x5B, 0x5B, 0x00, 0x00, // ;
    0x00, 0x08, 0x14, 0x22, 0x41, // <
    0x14, 0x14, 0x14, 0x14, 0x14, // =
    0x41, 0x22, 0x14, 0x08, 0x00, // >
    0x02, 0x21, 0x51, 0x09, 0x06, // ?
    
    0x3E, 0x41, 0x5D, 0x55, 0x1E, // @
    0x7E, 0x09, 0x09, 0x09, 0x7E, // A
    0x7E, 0x49, 0x49, 0x49, 0x36, // B
    0x3E, 0x41, 0x41, 0x41, 0x22, // C
    0x7F, 0x41, 0x41, 0x41, 0x3E, // D
    0x7F, 0x49, 0x49, 0x49, 0x41, // E
    0x7F, 0x09, 0x09, 0x09, 0x01, // F
    0x3E, 0x41, 0x41, 0x41, 0x32, // G
    0x7F, 0x08, 0x08, 0x08, 0x7F, // H
    0x00, 0x41, 0x7F, 0x41, 0x00, // I
    0x20, 0x40, 0x40, 0x40, 0x3F, // J
    0x7F, 0x08, 0x14, 0x22, 0x41, // K
    0x7F, 0x40, 0x40, 0x40, 0x40, // L
    0x7f, 0x02, 0x0C, 0x02, 0x7F, // M
    0x7F, 0x04, 0x08, 0x10, 0x7F, // N
    0x3E, 0x41 ,0x41 ,0x41, 0x3E, // O
    
    0x7F, 0x09, 0x09, 0x09, 0x06, // P
    0x3E, 0x41, 0x51, 0x21, 0x5E, // Q
    0x7F, 0x09, 0x19, 0x29, 0x46, // R
    0x26, 0x49, 0x49, 0x49, 0x32, // S
    0x01, 0x01, 0x7F, 0x01, 0x01, // T
    0x3F, 0x40, 0x40, 0x40, 0x3F, // U
    0x07, 0x18, 0x60, 0x18, 0x07, // V
    0x7F, 0x20, 0x18, 0x20, 0x7F, // W
    0x63, 0x14, 0x08, 0x14, 0x63, // X
    0x03, 0x04, 0x78, 0x04, 0x03, // Y
    0x61, 0x51, 0x49, 0x45, 0x43, // Z
    0x00, 0x00, 0x7F, 0x41, 0x41, // [
    0x02, 0x04, 0x08, 0x10, 0x20, // \ 
    0x41, 0x41, 0x7F, 0x00, 0x00, // ]
    0x04, 0x02, 0x01, 0x02, 0x04, // ^ (wijkt expres af van voorbeeld data)
    0x40, 0x40, 0x40, 0x40, 0x40, // _
    
    0x00, 0x07, 0x0B, 0x00, 0x00, // `
    0x38, 0x44, 0x44, 0x3C, 0x40, // a
    0x7F, 0x48, 0x44, 0x44, 0x38, // b
    0x38, 0x44, 0x44, 0x44, 0x44, // c
    0x38, 0x44, 0x44, 0x44, 0x7F, // d
    0x38, 0x54, 0x54, 0x54, 0x08, // e
    0x08, 0x7E, 0x09, 0x02, 0x00, // f
    0x08, 0x14, 0x54, 0x54, 0x3C, // g
    0x7F, 0x08, 0x04, 0x04, 0x78, // h
    0x00, 0x44, 0x7D, 0x40, 0x00, // i
    0x20, 0x40, 0x44, 0x3D, 0x00, // j
    0x00, 0x7F, 0x10, 0x28, 0x44, // k
    0x00, 0x41, 0x7F, 0x40, 0x00, // l
    0x78, 0x04, 0x18, 0x04, 0x78, // m
    0x7C, 0x08, 0x04, 0x04, 0x78, // n
    0x38, 0x44, 0x44, 0x44, 0x38, // o
    
    0x7C, 0x14, 0x24, 0x24, 0x18, // p
    0x18, 0x24, 0x14, 0x7C, 0x40, // q
    0x00, 0x7C, 0x08, 0x04, 0x04, // r
    0x48, 0x54, 0x54, 0x54, 0x20, // s
    0x04, 0x3E, 0x44, 0x20, 0x00, // t
    0x3C, 0x40, 0x40, 0x20, 0x7C, // u
    0x1C, 0x20, 0x40, 0x20, 0x1C, // v
    0x3C, 0x40, 0x30, 0x40, 0x3C, // w
    0x44, 0x28, 0x10, 0x28, 0x44, // x
    0x04, 0x48, 0x30, 0x08, 0x04, // y
    0x44, 0x64, 0x54, 0x08, 0x04, // z
    0x00, 0x08, 0x36, 0x41, 0x00, // {
    0x00, 0x00, 0x77, 0x00, 0x00, // |
    0x00, 0x41, 0x32, 0x08, 0x00, // }
    0x08, 0x04, 0x08, 0x10, 0x08, // ~
//    0x2A, 0x55, 0x2A, 0x55, 0x2A, // grijs
            
            

//    0x8E, 0x6B, 0x35, 0x51, 0xB4  // random data
};

#endif  /* _FONT_H */
