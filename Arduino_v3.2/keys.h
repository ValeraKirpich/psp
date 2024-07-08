#include <avr/pgmspace.h>

const byte newmap[16] PROGMEM = {0x00, 0x04, 0x08, 0x0C, 0x01, 0x05, 0x09, 0x0D, 0x02, 0x06, 0x0A, 0x0E, 0x03, 0x07, 0x0B, 0x0F};

const byte answer_08[] PROGMEM = {0xA5, 0x04, 0x06, 0xE2, 0x04, 0x6A};
const byte answer_0D[] PROGMEM = {0xA5, 0x07, 0x06, 0x9D, 0x10, 0x10, 0x28, 0x14, 0x54};
const byte answer_16[] PROGMEM = {0xA5, 0x13, 0x06, 0x53, 0x6F, 0x6E, 0x79, 0x45, 0x6E, 0x65, 0x72, 0x67, 0x79, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x73, 0x6B};
const byte answer_04[] PROGMEM = {0xA5, 0x04, 0x06, 0x68, 0x10, 0xD8};
const byte answer_02[] PROGMEM = {0xA5, 0x03, 0x06, 0x1B, 0x36};
const byte answer_09[] PROGMEM = {0xA5, 0x04, 0x06, 0x01, 0x04, 0x4B};
const byte answer_0B[] PROGMEM = {0xA5, 0x04, 0x06, 0x0F, 0x00, 0x41};
const byte answer_07[] PROGMEM = {0xA5, 0x04, 0x06, 0x08, 0x07, 0x41};
const byte answer_03[] PROGMEM = {0xA5, 0x04, 0x06, 0x36, 0x10, 0x0A};
const byte answer_01[] PROGMEM = {0xA5, 0x05, 0x06, 0x10, 0xC3, 0x06, 0x76};
const byte answer_90[] PROGMEM = {0xa5, 0x2a, 0x06, 0x20, 0x01, 0x00, 0x00, 0x82, 0x82, 0x82, 0x82};
const byte psp_81[] PROGMEM = {0x5A, 0x02, 0x01, 0xA2};

const byte go_key1[] PROGMEM = {0xC6, 0x6E, 0x9E, 0xD6, 0xEC, 0xBC, 0xB1, 0x21, 0xB7, 0x46, 0x5D, 0x25, 0x03, 0x7D, 0x66, 0x46};
const byte go_key2[] PROGMEM = {0xDA, 0x24, 0xDA, 0xB4, 0x3A, 0x61, 0xCB, 0xDF, 0x61, 0xFD, 0x25, 0x5D, 0x0A, 0xEA, 0x79, 0x57};
const byte go_secret[] PROGMEM = {0x88, 0x0E, 0x2A, 0x94, 0x11, 0x09, 0x26, 0xB2, 0x0E, 0x53, 0xE2, 0x2A, 0xE6, 0x48, 0xAE, 0x9D};

const byte keystore[][16] PROGMEM =
{
  {0x5C, 0x52, 0xD9, 0x1C, 0xF3, 0x82, 0xAC, 0xA4, 0x89, 0xD8, 0x81, 0x78, 0xEC, 0x16, 0x29, 0x7B}, // 0
  {0x9D, 0x4F, 0x50, 0xFC, 0xE1, 0xB6, 0x8E, 0x12, 0x09, 0x30, 0x7D, 0xDB, 0xA6, 0xA5, 0xB5, 0xAA}, // 1
  {0x09, 0x75, 0x98, 0x88, 0x64, 0xAC, 0xF7, 0x62, 0x1B, 0xC0, 0x90, 0x9D, 0xF0, 0xFC, 0xAB, 0xFF}, // 2
  {0xC9, 0x11, 0x5C, 0xE2, 0x06, 0x4A, 0x26, 0x86, 0xD8, 0xD6, 0xD9, 0xD0, 0x8C, 0xDE, 0x30, 0x59}, // 3
  {0x66, 0x75, 0x39, 0xD2, 0xFB, 0x42, 0x73, 0xB2, 0x90, 0x3F, 0xD7, 0xA3, 0x9E, 0xD2, 0xC6, 0x0C}, // 4
  {0xF4, 0xFA, 0xEF, 0x20, 0xF4, 0xDB, 0xAB, 0x31, 0xD1, 0x86, 0x74, 0xFD, 0x8F, 0x99, 0x05, 0x66}, // 5
  {0xEA, 0x0C, 0x81, 0x13, 0x63, 0xD7, 0xE9, 0x30, 0xF9, 0x61, 0x13, 0x5A, 0x4F, 0x35, 0x2D, 0xDC}, // 6
  {0x0A, 0x2E, 0x73, 0x30, 0x5C, 0x38, 0x2D, 0x4F, 0x31, 0x0D, 0x0A, 0xED, 0x84, 0xA4, 0x18, 0x00}, // 8
  {0xD2, 0x04, 0x74, 0x30, 0x8F, 0xE2, 0x69, 0x04, 0x6E, 0xD7, 0xBB, 0x07, 0xCF, 0x1C, 0xFF, 0x43}, // 9
  {0xAC, 0x00, 0xC0, 0xE3, 0xE8, 0x0A, 0xF0, 0x68, 0x3F, 0xDD, 0x17, 0x45, 0x19, 0x45, 0x43, 0xBD}, // 0A
  {0x01, 0x77, 0xD7, 0x50, 0xBD, 0xFD, 0x2B, 0xC1, 0xA0, 0x49, 0x3A, 0x13, 0x4A, 0x4C, 0x6A, 0xCF}, // 0B
  {0x05, 0x34, 0x91, 0x70, 0x93, 0x93, 0x45, 0xEE, 0x95, 0x1A, 0x14, 0x84, 0x33, 0x34, 0xA0, 0xDE}, // 0C
  {0xDF, 0xF3, 0xFC, 0xD6, 0x08, 0xB0, 0x55, 0x97, 0xCF, 0x09, 0xA2, 0x3B, 0xD1, 0x7D, 0x3F, 0xD2}, // 0D
  {0x4A, 0xA7, 0xC7, 0xB0, 0x11, 0x34, 0x46, 0x6F, 0xAC, 0x82, 0x16, 0x3E, 0x4B, 0xB5, 0x1B, 0xF9}, // 2F
  {0xCA, 0xC8, 0xB8, 0x7A, 0xCD, 0x9E, 0xC4, 0x96, 0x90, 0xAB, 0xE0, 0x81, 0x39, 0x20, 0xB1, 0x10}, // 97
  {0x03, 0xBE, 0xB6, 0x54, 0x99, 0x14, 0x04, 0x83, 0xBA, 0x18, 0x7A, 0x64, 0xEF, 0x90, 0x26, 0x1D}, // B3
  {0xC7, 0xAC, 0x13, 0x06, 0xDE, 0xFE, 0x39, 0xEC, 0x83, 0xA1, 0x48, 0x3B, 0x0E, 0xE2, 0xEC, 0x89}, // D9
  {0x41, 0x84, 0x99, 0xBE, 0x9D, 0x35, 0xA3, 0xB9, 0xFC, 0x6A, 0xD0, 0xD6, 0xF0, 0x41, 0xBB, 0x26}  // EB
};

const byte challenge1_secret[][8] PROGMEM =
{
  {0xD2, 0x07, 0x22, 0x53, 0xA4, 0xF2, 0x74, 0x68}, // 0
  {0xB3, 0x7A, 0x16, 0xEF, 0x55, 0x7B, 0xD0, 0x89}, // 1
  {0xA0, 0x4E, 0x32, 0xBB, 0xA7, 0x13, 0x9E, 0x46}, // 2
  {0xB0, 0xB8, 0x09, 0x83, 0x39, 0x89, 0xFA, 0xE2}, // 3
  {0xFE, 0x7D, 0x78, 0x99, 0xBF, 0xEC, 0x47, 0xC5}, // 4
  {0x30, 0x6F, 0x3A, 0x03, 0xD8, 0x6C, 0xBE, 0xE4}, // 5
  {0x84, 0x22, 0xDF, 0xEA, 0xE2, 0x1B, 0x63, 0xC2}, // 6
  {0xAD, 0x40, 0x43, 0xB2, 0x56, 0xEB, 0x45, 0x8B}, // 8
  {0xC2, 0x37, 0x7E, 0x8A, 0x74, 0x09, 0x6C, 0x5F}, // 0A
  {0x58, 0x1C, 0x7F, 0x19, 0x44, 0xF9, 0x62, 0x62}, // 0D
  {0xF1, 0xBC, 0x56, 0x2B, 0xD5, 0x5B, 0xB0, 0x77}, // 2F
  {0xAF, 0x60, 0x10, 0xA8, 0x46, 0xF7, 0x41, 0xF3}, // 97
  {0xDB, 0xD3, 0xAE, 0xA4, 0xDB, 0x04, 0x64, 0x10}, // B3
  {0x90, 0xE1, 0xF0, 0xC0, 0x01, 0x78, 0xE3, 0xFF}, // D9
  {0x0B, 0xD9, 0x02, 0x7E, 0x85, 0x1F, 0xA1, 0x23}  // EB
};

const byte challenge2_secret[][8] PROGMEM =
{
  {0xF5, 0xD7, 0xD4, 0xB5, 0x75, 0xF0, 0x8E, 0x4E}, // 0
  {0xCC, 0x69, 0x95, 0x81, 0xFD, 0x89, 0x12, 0x6C}, // 1
  {0x49, 0x5E, 0x03, 0x47, 0x94, 0x93, 0x1D, 0x7B}, // 2
  {0xF4, 0xE0, 0x43, 0x13, 0xAD, 0x2E, 0xB4, 0xDB}, // 3
  {0x86, 0x5E, 0x3E, 0xEF, 0x9D, 0xFB, 0xB1, 0xFD}, // 4
  {0xFF, 0x72, 0xBD, 0x2B, 0x83, 0xB8, 0x9D, 0x2F}, // 5
  {0x58, 0xB9, 0x5A, 0xAE, 0xF3, 0x99, 0xDB, 0xD0}, // 6
  {0x67, 0xC0, 0x72, 0x15, 0xD9, 0x6B, 0x39, 0xA1}, // 8
  {0x09, 0x3E, 0xC5, 0x19, 0xAF, 0x0F, 0x50, 0x2D}, // 0A
  {0x31, 0x80, 0x53, 0x87, 0x5C, 0x20, 0x3E, 0x24}, // 0D
  {0x1B, 0xDF, 0x24, 0x33, 0xEB, 0x29, 0x15, 0x5B}, // 2F
  {0x9D, 0xEE, 0xC0, 0x11, 0x44, 0xB6, 0x6F, 0x41}, // 97
  {0xE3, 0x2B, 0x8F, 0x56, 0xB2, 0x64, 0x12, 0x98}, // B3
  {0xC3, 0x4A, 0x6A, 0x7B, 0x20, 0x5F, 0xE8, 0xF9}, // D9
  {0xF7, 0x91, 0xED, 0x0B, 0x3F, 0x49, 0xA4, 0x48}  // EB
};

void get_keystore(byte *buffer, byte key)
{
  switch (key)
  {
    case 0:
      memcpy_P(buffer, keystore[0], 16);
      break;
    case 1:
      memcpy_P(buffer, keystore[1], 16);
      break;
    case 2:
      memcpy_P(buffer, keystore[2], 16);
      break;
    case 3:
      memcpy_P(buffer, keystore[3], 16);
      break;
    case 4:
      memcpy_P(buffer, keystore[4], 16);
      break;
    case 5:
      memcpy_P(buffer, keystore[5], 16);
      break;
    case 6:
      memcpy_P(buffer, keystore[6], 16);
      break;
    case 8:
      memcpy_P(buffer, keystore[7], 16);
      break;
    case 9:
      memcpy_P(buffer, keystore[8], 16);
      break;
    case 0x0A:
      memcpy_P(buffer, keystore[9], 16);
      break;
    case 0x0B:
      memcpy_P(buffer, keystore[10], 16);
      break;
    case 0x0C:
      memcpy_P(buffer, keystore[11], 16);
      break;
    case 0x0D:
      memcpy_P(buffer, keystore[12], 16);
      break;
    case 0x2F:
      memcpy_P(buffer, keystore[13], 16);
      break;
    case 0x97:
      memcpy_P(buffer, keystore[14], 16);
      break;
    case 0xB3:
      memcpy_P(buffer, keystore[15], 16);
      break;
    case 0xD9:
      memcpy_P(buffer, keystore[16], 16);
      break;
    case 0xEB:
      memcpy_P(buffer, keystore[17], 16);
      break;
    default:
      break; // не найдено
  }
}

void get_challenge1_secret(byte *buffer, byte version)
{
  switch (version)
  {
    case 0:
      memcpy_P(buffer, challenge1_secret[0], 8);
      break;
    case 1:
      memcpy_P(buffer, challenge1_secret[1], 8);
      break;
    case 2:
      memcpy_P(buffer, challenge1_secret[2], 8);
      break;
    case 3:
      memcpy_P(buffer, challenge1_secret[3], 8);
      break;
    case 4:
      memcpy_P(buffer, challenge1_secret[4], 8);
      break;
    case 5:
      memcpy_P(buffer, challenge1_secret[5], 8);
      break;
    case 6:
      memcpy_P(buffer, challenge1_secret[6], 8);
      break;
    case 8:
      memcpy_P(buffer, challenge1_secret[7], 8);
      break;
    case 0x0A:
      memcpy_P(buffer, challenge1_secret[8], 8);
      break;
    case 0x0D:
      memcpy_P(buffer, challenge1_secret[9], 8);
      break;
    case 0x2F:
      memcpy_P(buffer, challenge1_secret[10], 8);
      break;
    case 0x97:
      memcpy_P(buffer, challenge1_secret[11], 8);
      break;
    case 0xB3:
      memcpy_P(buffer, challenge1_secret[12], 8);
      break;
    case 0xD9:
      memcpy_P(buffer, challenge1_secret[13], 8);
      break;
    case 0xEB:
      memcpy_P(buffer, challenge1_secret[14], 8);
      break;
    default:
      delete[] buffer;
      break; // не найдено
  }
}

void get_challenge2_secret(byte *buffer, byte version)
{
  switch (version)
  {
    case 0:
      memcpy_P(buffer, challenge2_secret[0], 8);
      break;
    case 1:
      memcpy_P(buffer, challenge2_secret[1], 8);
      break;
    case 2:
      memcpy_P(buffer, challenge2_secret[2], 8);
      break;
    case 3:
      memcpy_P(buffer, challenge2_secret[3], 8);
      break;
    case 4:
      memcpy_P(buffer, challenge2_secret[4], 8);
      break;
    case 5:
      memcpy_P(buffer, challenge2_secret[5], 8);
      break;
    case 6:
      memcpy_P(buffer, challenge2_secret[6], 8);
      break;
    case 8:
      memcpy_P(buffer, challenge2_secret[7], 8);
      break;
    case 0x0A:
      memcpy_P(buffer, challenge2_secret[8], 8);
      break;
    case 0x0D:
      memcpy_P(buffer, challenge2_secret[9], 8);
      break;
    case 0x2F:
      memcpy_P(buffer, challenge2_secret[10], 8);
      break;
    case 0x97:
      memcpy_P(buffer, challenge2_secret[11], 8);
      break;
    case 0xB3:
      memcpy_P(buffer, challenge2_secret[12], 8);
      break;
    case 0xD9:
      memcpy_P(buffer, challenge2_secret[13], 8);
      break;
    case 0xEB:
      memcpy_P(buffer, challenge2_secret[14], 8);
      break;
    default:
      delete[] buffer;
      break; // не найдено
  }
}