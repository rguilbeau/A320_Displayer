/**
 * @brief Font 7 Segments pour l'afficheur OLED
 * @see https://tchapi.github.io/Adafruit-GFX-Font-Customiser/ for Customiser
 * @see https://oleddisplay.squix.ch/#/home for create
 */
const uint8_t DSEG7_Classic_Mini_Bold_25Bitmaps[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x3F, 
  0xE0, 0x3F, 0xF8, 0x3F, 0xFE, 0x1F, 0xFF, 0x1F, 0xFF, 0xCF, 0xFF, 0xE7, 
  0xFF, 0xF3, 0xFF, 0xF9, 0xFF, 0xFC, 0x7F, 0xFC, 0x3F, 0xFE, 0x0F, 0xFE, 
  0x03, 0xFE, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1F, 0x00, 0x3F, 0xE0, 0x3F, 0xF8, 0x3F, 0xFE, 0x1F, 0xFF, 0x1F, 0xFF, 
  0xCF, 0xFF, 0xE7, 0xFF, 0xF3, 0xFF, 0xF9, 0xFF, 0xFC, 0x7F, 0xFC, 0x3F, 
  0xFE, 0x0F, 0xFE, 0x03, 0xFE, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xC0, 0x01, 0xC0, 
  0x01, 0xC0, 0x00, 0x00, 0x0F, 0xF8, 0x1F, 0xFC, 0x0F, 0xF8, 0x00, 0x00, 
  0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0xFF, 0xE0, 
  0xFF, 0x80, 0x00, 0x73, 0x9C, 0x00, 0x1F, 0xFC, 0x27, 0xFC, 0x99, 0xFC, 
  0xCE, 0x00, 0xE7, 0x00, 0x73, 0x80, 0x39, 0xC0, 0x1C, 0xE0, 0x0E, 0x70, 
  0x07, 0x38, 0x03, 0x98, 0x00, 0xC8, 0x00, 0x20, 0x00, 0x02, 0x00, 0x09, 
  0x80, 0x0C, 0xE0, 0x0E, 0x70, 0x07, 0x38, 0x03, 0x9C, 0x01, 0xCE, 0x00, 
  0xE7, 0x00, 0x73, 0x80, 0x39, 0x9F, 0xCC, 0x9F, 0xF2, 0x1F, 0xFC, 0x00, 
  0x26, 0xEE, 0xEE, 0xEE, 0xE6, 0x20, 0x26, 0xEE, 0xEE, 0xEE, 0xE6, 0x20, 
  0x1F, 0xFC, 0x07, 0xFC, 0x81, 0xFC, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 
  0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x00, 0xC1, 
  0xFF, 0x21, 0xFF, 0xC2, 0x7F, 0xC1, 0x80, 0x00, 0xE0, 0x00, 0x70, 0x00, 
  0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0x9F, 
  0xC0, 0x9F, 0xF0, 0x1F, 0xFC, 0x00, 0x7F, 0xF0, 0x7F, 0xC8, 0x7F, 0x30, 
  0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 
  0x38, 0x00, 0x31, 0xFF, 0x27, 0xFF, 0x07, 0xFC, 0x80, 0x03, 0x00, 0x0E, 
  0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x87, 
  0xF3, 0x1F, 0xF2, 0x7F, 0xF0, 0x00, 0x40, 0x01, 0x30, 0x01, 0x9C, 0x01, 
  0xCE, 0x00, 0xE7, 0x00, 0x73, 0x80, 0x39, 0xC0, 0x1C, 0xE0, 0x0E, 0x70, 
  0x07, 0x30, 0x01, 0x93, 0xFE, 0x43, 0xFF, 0x80, 0xFF, 0x90, 0x00, 0x18, 
  0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 
  0xE0, 0x00, 0x70, 0x00, 0x18, 0x00, 0x04, 0x00, 0x1F, 0xFC, 0x27, 0xFC, 
  0x19, 0xFC, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 
  0x00, 0x70, 0x00, 0x38, 0x00, 0x18, 0x00, 0x09, 0xFF, 0x01, 0xFF, 0xC0, 
  0x7F, 0xC8, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 
  0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x1F, 0xCC, 0x1F, 0xF2, 0x1F, 
  0xFC, 0x00, 0x1F, 0xFC, 0x27, 0xFC, 0x19, 0xFC, 0x0E, 0x00, 0x07, 0x00, 
  0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x18, 
  0x00, 0x09, 0xFF, 0x01, 0xFF, 0xC2, 0x7F, 0xC9, 0x80, 0x0C, 0xE0, 0x0E, 
  0x70, 0x07, 0x38, 0x03, 0x9C, 0x01, 0xCE, 0x00, 0xE7, 0x00, 0x73, 0x80, 
  0x39, 0x9F, 0xCC, 0x9F, 0xF2, 0x1F, 0xFC, 0x00, 0x1F, 0xFC, 0x07, 0xFC, 
  0x81, 0xFC, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 
  0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x00, 0xC0, 0x00, 0x20, 0x00, 0x00, 
  0x00, 0x08, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 
  0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x1F, 
  0xFC, 0x27, 0xFC, 0x99, 0xFC, 0xCE, 0x00, 0xE7, 0x00, 0x73, 0x80, 0x39, 
  0xC0, 0x1C, 0xE0, 0x0E, 0x70, 0x07, 0x38, 0x03, 0x98, 0x00, 0xC9, 0xFF, 
  0x21, 0xFF, 0xC2, 0x7F, 0xC9, 0x80, 0x0C, 0xE0, 0x0E, 0x70, 0x07, 0x38, 
  0x03, 0x9C, 0x01, 0xCE, 0x00, 0xE7, 0x00, 0x73, 0x80, 0x39, 0x9F, 0xCC, 
  0x9F, 0xF2, 0x1F, 0xFC, 0x00, 0x1F, 0xFC, 0x27, 0xFC, 0x99, 0xFC, 0xCE, 
  0x00, 0xE7, 0x00, 0x73, 0x80, 0x39, 0xC0, 0x1C, 0xE0, 0x0E, 0x70, 0x07, 
  0x38, 0x03, 0x98, 0x00, 0xC9, 0xFF, 0x21, 0xFF, 0xC0, 0x7F, 0xC8, 0x00, 
  0x0C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 
  0x00, 0x70, 0x00, 0x38, 0x1F, 0xCC, 0x1F, 0xF2, 0x1F, 0xFC, 0x00, 0x0F, 
  0xF8, 0x0F, 0xFE, 0x13, 0xFE, 0x4C, 0x00, 0x67, 0x00, 0x73, 0x80, 0x39, 
  0xC0, 0x1C, 0xE0, 0x0E, 0x70, 0x07, 0x38, 0x03, 0x9C, 0x01, 0xCC, 0xFE, 
  0x64, 0xFF, 0x90, 0xFF, 0xE0, 0x00
};

const GFXglyph DSEG7_Classic_Mini_Bold_25Glyphs[] PROGMEM = {
  {     0,   0,   0,  21,    2,    1 },   // 0x20 ' '
  {     0,   0,   0,   0,    0,    0 },   // 0x21 '!'
  {     0,   0,   0,   0,    0,    0 },   // 0x22 '"'
  {     0,   0,   0,   0,    0,    0 },   // 0x23 '#'
  {     0,   0,   0,   0,    0,    0 },   // 0x24 '$'
  {     0,   0,   0,   0,    0,    0 },   // 0x25 '%'
  {     0,   0,   0,   0,    0,    0 },   // 0x26 '&'
  {     0,   0,   0,   0,    0,    0 },   // 0x27 '''
  {     0,   0,   0,   0,    0,    0 },   // 0x28 '('
  {     0,   0,   0,   0,    0,    0 },   // 0x29 ')'
  {    51,  17,  24,  21,    4,  -24 },   // 0x2A '*'
  {   102,  16,  25,  21,    2,  -25 },   // 0x2B '+'
  {     0,   0,   0,   0,    0,    0 },   // 0x2C ','
  {   152,  15,   3,  21,    4,  -14 },   // 0x2D '-'
  {   159,   5,   3,   3,   -1,   -2 },   // 0x2E '.'
  {     0,   0,   0,   0,    0,    0 },   // 0x2F '/'
  {   162,  17,  25,  21,    2,  -25 },   // 0x30 '0'
  {   216,   4,  23,  21,   15,  -24 },   // 0x31 '1'
  {   228,  17,  25,  21,    2,  -25 },   // 0x32 '2'
  {   282,  15,  25,  21,    4,  -25 },   // 0x33 '3'
  {   330,  17,  23,  21,    2,  -24 },   // 0x34 '4'
  {   380,  17,  25,  21,    2,  -25 },   // 0x35 '5'
  {   434,  17,  25,  21,    2,  -25 },   // 0x36 '6'
  {   488,  17,  24,  21,    2,  -25 },   // 0x37 '7'
  {   539,  17,  25,  21,    2,  -25 },   // 0x38 '8'
  {   593,  17,  25,  21,    2,  -25 },   // 0x39 '9'
  {     0,   0,   0,   0,    0,    0 },   // 0x3A ':'
  {     0,   0,   0,   0,    0,    0 },   // 0x3B ';'
  {     0,   0,   0,   0,    0,    0 },   // 0x3C '<'
  {     0,   0,   0,   0,    0,    0 },   // 0x3D '='
  {     0,   0,   0,   0,    0,    0 },   // 0x3E '>'
  {     0,   0,   0,   0,    0,    0 },   // 0x3F '?'
  {     0,   0,   0,   0,    0,    0 },   // 0x40 '@'
  {     0,   0,   0,   0,    0,    0 },   // 0x41 'A'
  {     0,   0,   0,   0,    0,    0 },   // 0x42 'B'
  {     0,   0,   0,   0,    0,    0 },   // 0x43 'C'
  {     0,   0,   0,   0,    0,    0 },   // 0x44 'D'
  {     0,   0,   0,   0,    0,    0 },   // 0x45 'E'
  {     0,   0,   0,   0,    0,    0 },   // 0x46 'F'
  {     0,   0,   0,   0,    0,    0 },   // 0x47 'G'
  {     0,   0,   0,   0,    0,    0 },   // 0x48 'H'
  {     0,   0,   0,   0,    0,    0 },   // 0x49 'I'
  {     0,   0,   0,   0,    0,    0 },   // 0x4A 'J'
  {     0,   0,   0,   0,    0,    0 },   // 0x4B 'K'
  {     0,   0,   0,   0,    0,    0 },   // 0x4C 'L'
  {     0,   0,   0,   0,    0,    0 },   // 0x4D 'M'
  {     0,   0,   0,   0,    0,    0 },   // 0x4E 'N'
  {     0,   0,   0,   0,    0,    0 },   // 0x4F 'O'
  {     0,   0,   0,   0,    0,    0 },   // 0x50 'P'
  {     0,   0,   0,   0,    0,    0 },   // 0x51 'Q'
  {     0,   0,   0,   0,    0,    0 },   // 0x52 'R'
  {     0,   0,   0,   0,    0,    0 },   // 0x53 'S'
  {     0,   0,   0,   0,    0,    0 },   // 0x54 'T'
  {     0,   0,   0,   0,    0,    0 },   // 0x55 'U'
  {     0,   0,   0,   0,    0,    0 },   // 0x56 'V'
  {     0,   0,   0,   0,    0,    0 },   // 0x57 'W'
  {     0,   0,   0,   0,    0,    0 },   // 0x58 'X'
  {     0,   0,   0,   0,    0,    0 },   // 0x59 'Y'
  {     0,   0,   0,   0,    0,    0 },   // 0x5A 'Z'
  {     0,   0,   0,   0,    0,    0 },   // 0x5B '['
  {     0,   0,   0,   0,    0,    0 },   // 0x5C '\'
  {     0,   0,   0,   0,    0,    0 },   // 0x5D ']'
  {     0,   0,   0,   0,    0,    0 },   // 0x5E '^'
  {     0,   0,   0,   0,    0,    0 },   // 0x5F '_'
  {     0,   0,   0,   0,    0,    0 },   // 0x60 '`'
  {     0,   0,   0,   0,    0,    0 },   // 0x61 'a'
  {     0,   0,   0,   0,    0,    0 },   // 0x62 'b'
  {     0,   0,   0,   0,    0,    0 },   // 0x63 'c'
  {     0,   0,   0,   0,    0,    0 },   // 0x64 'd'
  {     0,   0,   0,   0,    0,    0 },   // 0x65 'e'
  {     0,   0,   0,   0,    0,    0 },   // 0x66 'f'
  {     0,   0,   0,   0,    0,    0 },   // 0x67 'g'
  {     0,   0,   0,   0,    0,    0 },   // 0x68 'h'
  {     0,   0,   0,   0,    0,    0 },   // 0x69 'i'
  {     0,   0,   0,   0,    0,    0 },   // 0x6A 'j'
  {     0,   0,   0,   0,    0,    0 },   // 0x6B 'k'
  {     0,   0,   0,   0,    0,    0 },   // 0x6C 'l'
  {     0,   0,   0,   0,    0,    0 },   // 0x6D 'm'
  {     0,   0,   0,   0,    0,    0 },   // 0x6E 'n'
  {   647,  17,  14,  21,    2,  -14 },   // 0x6F 'o'
  {     0,   0,   0,   0,    0,    0 },   // 0x70 'p'
  {     0,   0,   0,   0,    0,    0 },   // 0x71 'q'
  {     0,   0,   0,   0,    0,    0 },   // 0x72 'r'
  {     0,   0,   0,   0,    0,    0 },   // 0x73 's'
  {     0,   0,   0,   0,    0,    0 },   // 0x74 't'
  {     0,   0,   0,   0,    0,    0 },   // 0x75 'u'
  {     0,   0,   0,   0,    0,    0 },   // 0x76 'v'
  {     0,   0,   0,   0,    0,    0 },   // 0x77 'w'
  {     0,   0,   0,   0,    0,    0 },   // 0x78 'x'
  {     0,   0,   0,   0,    0,    0 },   // 0x79 'y'
  {     0,   0,   0,   0,    0,    0 },   // 0x7A 'z'
  {     0,   0,   0,   0,    0,    0 },   // 0x7B '{'
  {     0,   0,   0,   0,    0,    0 },   // 0x7C '|'
  {     0,   0,   0,   0,    0,    0 }    // 0x7D '}'
};

const GFXfont DSEG7_Classic_Mini_Bold_25 PROGMEM = {
(uint8_t  *)DSEG7_Classic_Mini_Bold_25Bitmaps,       (GFXglyph *)DSEG7_Classic_Mini_Bold_25Glyphs, 0x20, 0x7E,        28};