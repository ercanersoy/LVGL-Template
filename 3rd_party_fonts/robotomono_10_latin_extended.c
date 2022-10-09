/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTOMONO_10_LATIN_EXTENDED
#define ROBOTOMONO_10_LATIN_EXTENDED 1
#endif

#if ROBOTOMONO_10_LATIN_EXTENDED

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf9,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x28, 0xa7, 0xcc, 0x53, 0xe5, 0x14,

    /* U+0024 "$" */
    0x23, 0xb5, 0x6, 0x18, 0x52, 0x71, 0x0,

    /* U+0025 "%" */
    0xc2, 0x8d, 0x8, 0x39, 0x61, 0x86,

    /* U+0026 "&" */
    0x71, 0x45, 0x18, 0xea, 0xe9, 0x9e,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x9, 0x49, 0x24, 0x89, 0x0,

    /* U+0029 ")" */
    0x9, 0x12, 0x49, 0x29, 0x0,

    /* U+002A "*" */
    0x21, 0x3e, 0xc5, 0x0,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x13, 0x22, 0x64, 0x4c, 0x80,

    /* U+0030 "0" */
    0x74, 0x63, 0x3e, 0xc6, 0x2e,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49,

    /* U+0032 "2" */
    0x74, 0xc6, 0x23, 0x31, 0x1f,

    /* U+0033 "3" */
    0x72, 0x42, 0x60, 0x85, 0x2e,

    /* U+0034 "4" */
    0x11, 0x8c, 0xa9, 0x7c, 0x42,

    /* U+0035 "5" */
    0xf8, 0x8e, 0x11, 0x9e,

    /* U+0036 "6" */
    0x32, 0x21, 0xe8, 0xc6, 0x2e,

    /* U+0037 "7" */
    0xf8, 0x44, 0x22, 0x11, 0x88,

    /* U+0038 "8" */
    0x69, 0x96, 0x99, 0x96,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x84, 0x4c,

    /* U+003A ":" */
    0xc6,

    /* U+003B ";" */
    0xc7,

    /* U+003C "<" */
    0x17, 0x86, 0x10,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x83, 0x6, 0xe8, 0x0,

    /* U+003F "?" */
    0xe9, 0x13, 0x64, 0x4,

    /* U+0040 "@" */
    0x39, 0x3b, 0x6d, 0xd6, 0xac, 0x1c,

    /* U+0041 "A" */
    0x30, 0xc3, 0xe, 0x49, 0xe4, 0xb1,

    /* U+0042 "B" */
    0xf4, 0xe7, 0xe8, 0xc6, 0x3e,

    /* U+0043 "C" */
    0x76, 0xe3, 0x8, 0x42, 0x6e,

    /* U+0044 "D" */
    0xf4, 0xa3, 0x18, 0xc6, 0x5e,

    /* U+0045 "E" */
    0xf8, 0x8f, 0x88, 0x8f,

    /* U+0046 "F" */
    0xf8, 0x88, 0xf8, 0x88,

    /* U+0047 "G" */
    0x76, 0x61, 0x9, 0xc7, 0x2e,

    /* U+0048 "H" */
    0x8c, 0x63, 0xf8, 0xc6, 0x31,

    /* U+0049 "I" */
    0xf2, 0x22, 0x22, 0x2f,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x85, 0x2e,

    /* U+004B "K" */
    0x9c, 0xa9, 0xce, 0x5a, 0x53,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0xde, 0xf7, 0xda, 0xd6, 0x31,

    /* U+004E "N" */
    0x8e, 0x73, 0x5a, 0xce, 0x71,

    /* U+004F "O" */
    0x76, 0xe3, 0x18, 0xc7, 0x6e,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0x76, 0xe3, 0x18, 0xc7, 0x6e, 0x8,

    /* U+0052 "R" */
    0xf4, 0x63, 0x1f, 0x4a, 0x71,

    /* U+0053 "S" */
    0x74, 0xe1, 0xc3, 0x86, 0x2e,

    /* U+0054 "T" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x8,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0056 "V" */
    0xcd, 0x24, 0x92, 0x78, 0xc3, 0xc,

    /* U+0057 "W" */
    0xb6, 0xd7, 0x5e, 0x79, 0xe4, 0x92,

    /* U+0058 "X" */
    0x4d, 0x23, 0x8c, 0x30, 0xe4, 0x93,

    /* U+0059 "Y" */
    0x8e, 0xd4, 0xa2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0xc4, 0x42, 0x23, 0x1f,

    /* U+005B "[" */
    0xea, 0xaa, 0xac,

    /* U+005C "\\" */
    0x84, 0x44, 0x22, 0x21, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x5c,

    /* U+005E "^" */
    0x66, 0x69,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x72, 0x5e, 0x94, 0xbc,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e,

    /* U+0063 "c" */
    0x79, 0x88, 0x97,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x2f,

    /* U+0065 "e" */
    0x74, 0x7f, 0xc, 0xb8,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x7c, 0x63, 0x18, 0xbc, 0x2e,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x31,

    /* U+0069 "i" */
    0x20, 0xe2, 0x22, 0x2f,

    /* U+006A "j" */
    0x23, 0x92, 0x49, 0x38,

    /* U+006B "k" */
    0x84, 0x25, 0x4c, 0x72, 0xd2,

    /* U+006C "l" */
    0xe2, 0x22, 0x22, 0x2f,

    /* U+006D "m" */
    0xfd, 0x6b, 0x5a, 0xd4,

    /* U+006E "n" */
    0xf9, 0x99, 0x99,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0070 "p" */
    0xf4, 0x63, 0x18, 0xfa, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x18, 0xbc, 0x21,

    /* U+0072 "r" */
    0xf8, 0x88, 0x88,

    /* U+0073 "s" */
    0x74, 0xb0, 0x69, 0x38,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x47,

    /* U+0075 "u" */
    0x99, 0x99, 0x97,

    /* U+0076 "v" */
    0x49, 0x24, 0x8c, 0x30, 0xc0,

    /* U+0077 "w" */
    0xa6, 0xd7, 0x9e, 0x59, 0x20,

    /* U+0078 "x" */
    0x49, 0xe3, 0xc, 0x79, 0x20,

    /* U+0079 "y" */
    0xcd, 0x26, 0x8c, 0x30, 0x42, 0x18,

    /* U+007A "z" */
    0xf8, 0x8c, 0xc4, 0x7c,

    /* U+007B "{" */
    0x29, 0x25, 0x12, 0x48, 0x80,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0,

    /* U+007E "~" */
    0x66, 0x60,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0x9f,

    /* U+00A2 "¢" */
    0x23, 0xa7, 0x8, 0x4d, 0xc4,

    /* U+00A3 "£" */
    0x32, 0xd0, 0x8e, 0x21, 0x1f,

    /* U+00A4 "¤" */
    0xfe, 0xe3, 0x1d, 0xfc,

    /* U+00A5 "¥" */
    0x8e, 0xd4, 0xaf, 0xfc, 0x84,

    /* U+00A6 "¦" */
    0xf7, 0x80,

    /* U+00A7 "§" */
    0x74, 0xe0, 0xe9, 0xc5, 0xc3, 0x8b, 0x80,

    /* U+00A8 "¨" */
    0xd0,

    /* U+00A9 "©" */
    0x77, 0xf3, 0x9f, 0xb8,

    /* U+00AA "ª" */
    0xf7, 0xf0,

    /* U+00AB "«" */
    0x5a, 0xa5,

    /* U+00AC "¬" */
    0xf1, 0x10,

    /* U+00AD "­" */
    0xf0,

    /* U+00AE "®" */
    0x77, 0x7b, 0x9c, 0xb8,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0xd7, 0x0,

    /* U+00B1 "±" */
    0x22, 0xf2, 0x20, 0xf0,

    /* U+00B2 "²" */
    0xe5, 0x70,

    /* U+00B3 "³" */
    0x62, 0x16,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x99, 0x99, 0x9f, 0x88,

    /* U+00B6 "¶" */
    0x7f, 0xff, 0x71, 0x11,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x9c,

    /* U+00B9 "¹" */
    0x55,

    /* U+00BA "º" */
    0x69, 0x96,

    /* U+00BB "»" */
    0xa5, 0x5a,

    /* U+00BC "¼" */
    0x42, 0x94, 0xc2, 0xac, 0x61,

    /* U+00BD "½" */
    0x41, 0x45, 0x18, 0x39, 0x24, 0x87,

    /* U+00BE "¾" */
    0x61, 0xa2, 0x9c, 0x14, 0xb1, 0xc1,

    /* U+00BF "¿" */
    0x20, 0x26, 0xc8, 0x97,

    /* U+00C0 "À" */
    0x20, 0x3, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+00C1 "Á" */
    0x10, 0x3, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+00C2 "Â" */
    0x31, 0x23, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+00C3 "Ã" */
    0x38, 0x3, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+00C4 "Ä" */
    0x68, 0x3, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+00C5 "Å" */
    0x30, 0xc3, 0xc, 0x30, 0xc3, 0x92, 0x79, 0x2c,
    0x40,

    /* U+00C6 "Æ" */
    0x3c, 0xc3, 0x16, 0x51, 0xcd, 0x27,

    /* U+00C7 "Ç" */
    0x74, 0xe1, 0x8, 0x4f, 0xee, 0x21, 0x0,

    /* U+00C8 "È" */
    0x40, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00C9 "É" */
    0x22, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00CA "Ê" */
    0x61, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00CB "Ë" */
    0xd0, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00CC "Ì" */
    0x40, 0xf2, 0x22, 0x22, 0x2f,

    /* U+00CD "Í" */
    0x22, 0xf2, 0x22, 0x22, 0x2f,

    /* U+00CE "Î" */
    0x6d, 0xf2, 0x22, 0x22, 0x2f,

    /* U+00CF "Ï" */
    0xb0, 0xf2, 0x22, 0x22, 0x2f,

    /* U+00D0 "Ð" */
    0x79, 0x24, 0x79, 0x45, 0x14, 0x9e,

    /* U+00D1 "Ñ" */
    0x70, 0x23, 0x9c, 0xd6, 0xb3, 0x9c, 0x40,

    /* U+00D2 "Ò" */
    0x60, 0x1d, 0xb8, 0xc6, 0x31, 0xdb, 0x80,

    /* U+00D3 "Ó" */
    0x11, 0x1d, 0xb8, 0xc6, 0x31, 0xdb, 0x80,

    /* U+00D4 "Ô" */
    0x22, 0x80, 0xed, 0xc6, 0x31, 0x8e, 0xdc,

    /* U+00D5 "Õ" */
    0x70, 0x1d, 0xb8, 0xc6, 0x31, 0xdb, 0x80,

    /* U+00D6 "Ö" */
    0xd0, 0x1d, 0xb8, 0xc6, 0x31, 0xdb, 0x80,

    /* U+00D7 "×" */
    0x96, 0x6f, 0x90,

    /* U+00D8 "Ø" */
    0x7c, 0xe7, 0x5a, 0xe7, 0x7e, 0x80,

    /* U+00D9 "Ù" */
    0x60, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DA "Ú" */
    0x11, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DB "Û" */
    0x70, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DC "Ü" */
    0xd0, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DD "Ý" */
    0x10, 0x23, 0xb5, 0x28, 0x84, 0x21, 0x0,

    /* U+00DE "Þ" */
    0x84, 0x3d, 0x18, 0xfa, 0x10,

    /* U+00DF "ß" */
    0x74, 0xad, 0x4b, 0x4e, 0x7e,

    /* U+00E0 "à" */
    0x20, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E1 "á" */
    0x10, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E2 "â" */
    0x30, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E3 "ã" */
    0x70, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E4 "ä" */
    0x58, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E5 "å" */
    0x32, 0x8c, 0xe4, 0xbd, 0x29, 0x78,

    /* U+00E6 "æ" */
    0xf8, 0xa7, 0xf8, 0xb3, 0xe0,

    /* U+00E7 "ç" */
    0x79, 0x89, 0xf7, 0x22,

    /* U+00E8 "è" */
    0x60, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+00E9 "é" */
    0x11, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+00EA "ê" */
    0x60, 0x9d, 0x1f, 0xc3, 0x2e,

    /* U+00EB "ë" */
    0xb0, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+00EC "ì" */
    0x60, 0xe2, 0x22, 0x2f,

    /* U+00ED "í" */
    0x20, 0xe2, 0x22, 0x2f,

    /* U+00EE "î" */
    0x24, 0xe2, 0x22, 0x2f,

    /* U+00EF "ï" */
    0xd0, 0xe2, 0x22, 0x2f,

    /* U+00F0 "ð" */
    0x29, 0x86, 0xf8, 0xc6, 0x2e,

    /* U+00F1 "ñ" */
    0x60, 0xf9, 0x99, 0x99,

    /* U+00F2 "ò" */
    0x60, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F3 "ó" */
    0x11, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F4 "ô" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F5 "õ" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F6 "ö" */
    0xb0, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F7 "÷" */
    0x60, 0x1, 0xf0, 0x30,

    /* U+00F8 "ø" */
    0xb, 0xa7, 0x5a, 0xe5, 0xd0,

    /* U+00F9 "ù" */
    0x40, 0x99, 0x99, 0x97,

    /* U+00FA "ú" */
    0x20, 0x99, 0x99, 0x97,

    /* U+00FB "û" */
    0x60, 0x99, 0x99, 0x97,

    /* U+00FC "ü" */
    0x90, 0x99, 0x99, 0x97,

    /* U+00FD "ý" */
    0x10, 0xc, 0xd2, 0x68, 0xc3, 0x4, 0x21, 0x80,

    /* U+00FE "þ" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e, 0x84, 0x0,

    /* U+00FF "ÿ" */
    0x68, 0xc, 0xd2, 0x68, 0xc3, 0x4, 0x21, 0x80,

    /* U+0100 "Ā" */
    0x78, 0x3, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+0101 "ā" */
    0x78, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+0102 "Ă" */
    0x48, 0xc3, 0xc, 0x30, 0xe4, 0x9e, 0x4b, 0x10,

    /* U+0103 "ă" */
    0x70, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+0104 "Ą" */
    0x30, 0xc3, 0xe, 0x49, 0xe4, 0xb1, 0x8, 0x30,

    /* U+0105 "ą" */
    0x72, 0x5e, 0x94, 0xbc, 0x41,

    /* U+0106 "Ć" */
    0x11, 0x1d, 0x98, 0x42, 0x11, 0x9b, 0x80,

    /* U+0107 "ć" */
    0x30, 0x79, 0x88, 0x97,

    /* U+0108 "Ĉ" */
    0x22, 0x80, 0xed, 0xc6, 0x10, 0x84, 0xdc,

    /* U+0109 "ĉ" */
    0x60, 0x79, 0x88, 0x97,

    /* U+010A "Ċ" */
    0x20, 0x1d, 0xb8, 0xc2, 0x10, 0x9b, 0x80,

    /* U+010B "ċ" */
    0x60, 0x79, 0x88, 0x97,

    /* U+010C "Č" */
    0x51, 0x80, 0xed, 0xc6, 0x10, 0x84, 0xdc,

    /* U+010D "č" */
    0x52, 0x79, 0x88, 0x97,

    /* U+010E "Ď" */
    0x70, 0x3d, 0x28, 0xc6, 0x31, 0x97, 0x80,

    /* U+010F "ď" */
    0xa, 0x15, 0xe4, 0x48, 0x91, 0x22, 0x3c,

    /* U+0110 "Đ" */
    0x79, 0x24, 0x79, 0x45, 0x14, 0x9e,

    /* U+0111 "đ" */
    0x3c, 0x27, 0xa2, 0x8a, 0x28, 0x9e,

    /* U+0112 "Ē" */
    0xf0, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+0113 "ē" */
    0x70, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+0114 "Ĕ" */
    0x56, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+0115 "ĕ" */
    0x70, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+0116 "Ė" */
    0x60, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+0117 "ė" */
    0x60, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+0118 "Ę" */
    0xf8, 0x8f, 0x88, 0x8f, 0x23,

    /* U+0119 "ę" */
    0x74, 0x7f, 0xd, 0x98, 0x86,

    /* U+011A "Ě" */
    0x60, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+011B "ě" */
    0x51, 0x1d, 0x1f, 0xc3, 0x2e,

    /* U+011C "Ĝ" */
    0x22, 0x80, 0xec, 0xc2, 0x13, 0x8e, 0x5c,

    /* U+011D "ĝ" */
    0x70, 0x1f, 0x18, 0xc6, 0x2f, 0xb, 0x80,

    /* U+011E "Ğ" */
    0x70, 0x1d, 0x98, 0x42, 0x71, 0xcb, 0x80,

    /* U+011F "ğ" */
    0x70, 0x1f, 0x18, 0xc6, 0x2f, 0xb, 0x80,

    /* U+0120 "Ġ" */
    0x60, 0x1d, 0x98, 0x42, 0x71, 0xcb, 0x80,

    /* U+0121 "ġ" */
    0x60, 0x1f, 0x18, 0xc6, 0x2f, 0xb, 0x80,

    /* U+0122 "Ģ" */
    0x76, 0x61, 0xb, 0xc7, 0x2e, 0x21, 0x0,

    /* U+0123 "ģ" */
    0x21, 0x0, 0xf8, 0xc6, 0x31, 0x78, 0x5c,

    /* U+0124 "Ĥ" */
    0x62, 0xa3, 0x18, 0xfe, 0x31, 0x8c, 0x40,

    /* U+0125 "ĥ" */
    0x42, 0x80, 0x10, 0x41, 0xe4, 0x51, 0x45, 0x14,
    0x40,

    /* U+0126 "Ħ" */
    0x8b, 0xf8, 0xbe, 0x8a, 0x28, 0xa2,

    /* U+0127 "ħ" */
    0xe2, 0x1c, 0x94, 0xa5, 0x29,

    /* U+0128 "Ĩ" */
    0xf0, 0xf2, 0x22, 0x22, 0x2f,

    /* U+0129 "ĩ" */
    0x70, 0xe2, 0x22, 0x2f,

    /* U+012A "Ī" */
    0xf0, 0xf2, 0x22, 0x22, 0x2f,

    /* U+012B "ī" */
    0x70, 0xe2, 0x22, 0x2f,

    /* U+012C "Ĭ" */
    0x56, 0xf2, 0x22, 0x22, 0x2f,

    /* U+012D "ĭ" */
    0x60, 0xe2, 0x22, 0x2f,

    /* U+012E "Į" */
    0xf2, 0x22, 0x22, 0x2f, 0x42,

    /* U+012F "į" */
    0x20, 0xe2, 0x22, 0x2f, 0x46,

    /* U+0130 "İ" */
    0x60, 0xf2, 0x22, 0x22, 0x2f,

    /* U+0131 "ı" */
    0xe2, 0x22, 0x2f,

    /* U+0132 "Ĳ" */
    0x8c, 0x63, 0x18, 0xc6, 0xb7,

    /* U+0133 "ĳ" */
    0xd0, 0x36, 0x94, 0xa5, 0x3d, 0x9, 0x80,

    /* U+0134 "Ĵ" */
    0x1c, 0x0, 0x82, 0x8, 0x20, 0x82, 0x49, 0xc0,

    /* U+0135 "ĵ" */
    0x25, 0xe2, 0x22, 0x22, 0x2c,

    /* U+0136 "Ķ" */
    0x8c, 0xad, 0xce, 0x5a, 0x71, 0x21, 0x0,

    /* U+0137 "ķ" */
    0x84, 0x27, 0x6e, 0x7a, 0x51, 0x21, 0x0,

    /* U+0138 "ĸ" */
    0x95, 0x39, 0xcb, 0x48,

    /* U+0139 "Ĺ" */
    0x48, 0x88, 0x88, 0x88, 0x8f,

    /* U+013A "ĺ" */
    0x12, 0xe, 0x22, 0x22, 0x22, 0xf0,

    /* U+013B "Ļ" */
    0x84, 0x21, 0x8, 0x42, 0x1f, 0x21, 0x0,

    /* U+013C "ļ" */
    0xe2, 0x22, 0x22, 0x2f, 0x22, 0x20,

    /* U+013D "Ľ" */
    0x99, 0x98, 0x88, 0x8f,

    /* U+013E "ľ" */
    0xe9, 0x48, 0x42, 0x10, 0x9e,

    /* U+013F "Ŀ" */
    0x88, 0x8a, 0x88, 0x8f,

    /* U+0140 "ŀ" */
    0xe2, 0x23, 0x22, 0x2f,

    /* U+0141 "Ł" */
    0x42, 0x10, 0xcc, 0x21, 0xf,

    /* U+0142 "ł" */
    0xe2, 0x32, 0xe2, 0x2f,

    /* U+0143 "Ń" */
    0x11, 0x23, 0x9c, 0xd6, 0xb3, 0x9c, 0x40,

    /* U+0144 "ń" */
    0x20, 0xf9, 0x99, 0x99,

    /* U+0145 "Ņ" */
    0x8e, 0x73, 0x5a, 0xce, 0x71, 0x21, 0x0,

    /* U+0146 "ņ" */
    0xf9, 0x99, 0x99, 0x22, 0x0,

    /* U+0147 "Ň" */
    0x51, 0x23, 0x9c, 0xd6, 0xb3, 0x9c, 0x40,

    /* U+0148 "ň" */
    0x60, 0xf9, 0x99, 0x99,

    /* U+0149 "ŉ" */
    0x84, 0x1e, 0x94, 0xa5, 0x29,

    /* U+014A "Ŋ" */
    0x9d, 0xdd, 0xbb, 0xb9, 0x13,

    /* U+014B "ŋ" */
    0xf9, 0x99, 0x99, 0x13,

    /* U+014C "Ō" */
    0x70, 0x1d, 0xb8, 0xc6, 0x31, 0xdb, 0x80,

    /* U+014D "ō" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+014E "Ŏ" */
    0x53, 0x80, 0xed, 0xc6, 0x31, 0x8e, 0xdc,

    /* U+014F "ŏ" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+0150 "Ő" */
    0x30, 0x1d, 0xb8, 0xc6, 0x31, 0xdb, 0x80,

    /* U+0151 "ő" */
    0x38, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+0152 "Œ" */
    0x7e, 0x49, 0x27, 0x92, 0x49, 0x1f,

    /* U+0153 "œ" */
    0x7a, 0xeb, 0xec, 0xb1, 0xe0,

    /* U+0154 "Ŕ" */
    0x31, 0x3d, 0x18, 0xc7, 0xd2, 0x9c, 0x40,

    /* U+0155 "ŕ" */
    0x40, 0xf8, 0x88, 0x88,

    /* U+0156 "Ŗ" */
    0xf4, 0x63, 0x1f, 0x4a, 0x71, 0x21, 0x0,

    /* U+0157 "ŗ" */
    0xf8, 0x88, 0x88, 0x88, 0x80,

    /* U+0158 "Ř" */
    0x51, 0x3d, 0x18, 0xc7, 0xd2, 0x9c, 0x40,

    /* U+0159 "ř" */
    0xc0, 0xf8, 0x88, 0x88,

    /* U+015A "Ś" */
    0x11, 0x1d, 0x18, 0x70, 0xf1, 0x8b, 0x80,

    /* U+015B "ś" */
    0x20, 0x1d, 0x2c, 0x1a, 0x4e,

    /* U+015C "Ŝ" */
    0x22, 0x80, 0xe9, 0xc3, 0x87, 0xc, 0x5c,

    /* U+015D "ŝ" */
    0x60, 0x1d, 0x2c, 0x1a, 0x4e,

    /* U+015E "Ş" */
    0x74, 0x60, 0xc1, 0xc7, 0xee, 0x31, 0x0,

    /* U+015F "ş" */
    0xf4, 0x91, 0x6f, 0x38, 0x84,

    /* U+0160 "Š" */
    0x51, 0x0, 0xe9, 0xc3, 0x87, 0xc, 0x5c,

    /* U+0161 "š" */
    0x60, 0x1d, 0x2c, 0x1a, 0x4e,

    /* U+0162 "Ţ" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x80,

    /* U+0163 "ţ" */
    0x44, 0xf4, 0x44, 0x77, 0x22,

    /* U+0164 "Ť" */
    0x50, 0x8f, 0xc8, 0x20, 0x82, 0x8, 0x20, 0x80,

    /* U+0165 "ť" */
    0x8, 0x52, 0x8f, 0x21, 0x8, 0x41, 0x80,

    /* U+0166 "Ŧ" */
    0xfc, 0x82, 0x1e, 0x20, 0x82, 0x8,

    /* U+0167 "ŧ" */
    0x44, 0xf4, 0xe4, 0x47,

    /* U+0168 "Ũ" */
    0x70, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0169 "ũ" */
    0x60, 0x99, 0x99, 0x97,

    /* U+016A "Ū" */
    0x78, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+016B "ū" */
    0xf0, 0x99, 0x99, 0x97,

    /* U+016C "Ŭ" */
    0x70, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+016D "ŭ" */
    0x60, 0x99, 0x99, 0x97,

    /* U+016E "Ů" */
    0x63, 0x19, 0x18, 0xc6, 0x31, 0x8c, 0x5c,

    /* U+016F "ů" */
    0x66, 0x69, 0x99, 0x99, 0x70,

    /* U+0170 "Ű" */
    0x28, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0171 "ű" */
    0x50, 0x99, 0x99, 0x97,

    /* U+0172 "Ų" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e, 0x21, 0x80,

    /* U+0173 "ų" */
    0x99, 0x99, 0x97, 0x23,

    /* U+0174 "Ŵ" */
    0x31, 0x2b, 0x6d, 0x75, 0xe7, 0x9e, 0x49, 0x20,

    /* U+0175 "ŵ" */
    0x30, 0xa, 0x6d, 0x79, 0xe5, 0x92,

    /* U+0176 "Ŷ" */
    0x22, 0xa3, 0xb5, 0x28, 0x84, 0x21, 0x0,

    /* U+0177 "ŷ" */
    0x30, 0xc, 0xd2, 0x68, 0xc3, 0x4, 0x21, 0x80,

    /* U+0178 "Ÿ" */
    0xd0, 0x23, 0xb5, 0x28, 0x84, 0x21, 0x0,

    /* U+0179 "Ź" */
    0x11, 0x3e, 0x31, 0x10, 0x88, 0xc7, 0xc0,

    /* U+017A "ź" */
    0x10, 0x3e, 0x23, 0x31, 0x1f,

    /* U+017B "Ż" */
    0x60, 0x3e, 0x31, 0x10, 0x88, 0xc7, 0xc0,

    /* U+017C "ż" */
    0x20, 0x3e, 0x23, 0x31, 0x1f,

    /* U+017D "Ž" */
    0x51, 0x3e, 0x31, 0x10, 0x88, 0xc7, 0xc0,

    /* U+017E "ž" */
    0x51, 0x3e, 0x23, 0x31, 0x1f,

    /* U+017F "ſ" */
    0x72, 0x49, 0x24, 0x80,

    /* U+0192 "ƒ" */
    0x19, 0x8, 0xe2, 0x10, 0x84, 0x21, 0x38,

    /* U+01A0 "Ơ" */
    0x7e, 0xe3, 0x18, 0xc7, 0x6e,

    /* U+01A1 "ơ" */
    0x3, 0xe3, 0x18, 0xc5, 0xc0,

    /* U+01AF "Ư" */
    0x8b, 0x1a, 0x24, 0x48, 0x91, 0x22, 0x38,

    /* U+01B0 "ư" */
    0x6, 0x79, 0xa4, 0x92, 0x47, 0x0,

    /* U+01F0 "ǰ" */
    0x52, 0xe2, 0x22, 0x22, 0x2c,

    /* U+01FA "Ǻ" */
    0x8, 0x43, 0xc, 0x30, 0xc3, 0xe, 0x49, 0xe4,
    0xb1,

    /* U+01FB "ǻ" */
    0x8, 0x8c, 0x67, 0x25, 0xe9, 0x4b, 0xc0,

    /* U+01FC "Ǽ" */
    0x18, 0x43, 0xcc, 0x31, 0x65, 0x1c, 0xd2, 0x70,

    /* U+01FD "ǽ" */
    0x10, 0xf, 0x8a, 0x7f, 0x8b, 0x3e,

    /* U+01FE "Ǿ" */
    0x11, 0x0, 0xf9, 0xce, 0xb5, 0xce, 0xfd, 0x0,

    /* U+01FF "ǿ" */
    0x30, 0x5d, 0x3a, 0xd7, 0x2e, 0x80,

    /* U+0218 "Ș" */
    0x74, 0xe1, 0xc3, 0x86, 0x6e, 0x21, 0x0,

    /* U+0219 "ș" */
    0x72, 0x58, 0x38, 0xb8, 0x84, 0x0,

    /* U+021A "Ț" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+021B "ț" */
    0x44, 0xf4, 0x44, 0x43, 0x22,

    /* U+0237 "ȷ" */
    0xe4, 0x92, 0x4e,

    /* U+0259 "ə" */
    0xf4, 0x85, 0xe9, 0x38
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 96, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 96, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 17, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 96, .box_w = 1, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 30, .adv_w = 96, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 35, .adv_w = 96, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 40, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 44, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 48, .adv_w = 96, .box_w = 1, .box_h = 3, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 49, .adv_w = 96, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 50, .adv_w = 96, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 56, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 96, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 96, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 96, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 104, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 107, .adv_w = 96, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 109, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 113, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 206, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 96, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 258, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 263, .adv_w = 96, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 266, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 268, .adv_w = 96, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 269, .adv_w = 96, .box_w = 2, .box_h = 1, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 270, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 96, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 301, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 96, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 314, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 96, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 339, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 344, .adv_w = 96, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 96, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 379, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 96, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 388, .adv_w = 96, .box_w = 1, .box_h = 10, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 390, .adv_w = 96, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 96, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 397, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 96, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 399, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 404, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 96, .box_w = 1, .box_h = 9, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 420, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 427, .adv_w = 96, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 428, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 96, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 434, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 436, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 438, .adv_w = 96, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 439, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 96, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 444, .adv_w = 96, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 446, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 96, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 452, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 454, .adv_w = 96, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 455, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 459, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 464, .adv_w = 96, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 465, .adv_w = 96, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 466, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 468, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 470, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 491, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 96, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 553, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 644, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 650, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 735, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 809, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 814, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 838, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 845, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 853, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 887, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 892, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 96, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 950, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 956, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 967, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 972, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 997, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1002, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1026, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1040, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1054, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1061, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1068, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 96, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1084, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1090, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1104, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1122, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1127, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1132, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 96, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1145, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1152, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1160, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1165, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1172, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1179, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 96, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1201, .adv_w = 96, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1207, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1216, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1220, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1229, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1233, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1244, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1251, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1256, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1267, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1277, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1281, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1300, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1305, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1317, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1323, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1339, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1346, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1351, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1362, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1369, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1374, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1381, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1393, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1398, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1410, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1418, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1423, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1438, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1455, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1466, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1470, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1477, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1481, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1493, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1500, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1504, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1511, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1515, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1523, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1536, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1544, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1551, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1558, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1563, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1570, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1582, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 96, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1591, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1598, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1603, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1608, .adv_w = 96, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1615, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1621, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1626, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1635, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1642, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1650, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1656, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1664, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1670, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1677, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1683, .adv_w = 96, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1692, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1697, .adv_w = 96, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1700, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0xe, 0xf, 0x1d, 0x1e, 0x5e, 0x68, 0x69,
    0x6a, 0x6b, 0x6c, 0x6d, 0x86, 0x87, 0x88, 0x89,
    0xa5, 0xc7
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 224, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 402, .range_length = 200, .glyph_id_start = 320,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 18, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t robotomono_10_latin_extended = {
#else
lv_font_t robotomono_10_latin_extended = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTOMONO_10_LATIN_EXTENDED*/

