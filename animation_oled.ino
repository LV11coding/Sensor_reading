#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3C
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RST_PIN -1

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,63,252,0,0,0,0,0,0,56,28,0,0,0,0,0,0,120,28,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,56,28,0,0,0,0,0,0,60,60,0,0,0,0,0,0,31,248,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,63,252,0,0,0,0,0,0,60,30,0,0,0,0,0,0,56,14,0,0,0,0,0,0,56,14,0,0,0,0,0,0,56,14,0,0,0,0,0,0,56,14,0,0,0,0,0,0,60,14,0,0,0,0,0,0,62,28,0,0,0,0,0,0,31,252,0,0,0,0,0,0,15,248,0,0,0,0,0,0,7,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,254,0,0,0,0,0,0,31,255,0,0,0,0,0,0,63,7,0,0,0,0,0,0,62,3,128,0,0,0,0,0,62,3,128,0,0,0,0,0,62,3,128,0,0,0,0,0,62,3,128,0,0,0,0,0,63,3,128,0,0,0,0,0,31,135,0,0,0,0,0,0,31,255,0,0,0,0,0,0,15,254,0,0,0,0,0,0,3,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,254,0,0,0,0,0,0,15,255,128,0,0,0,0,0,31,255,224,0,0,0,0,0,63,249,240,0,0,0,0,0,63,240,112,0,0,0,0,0,63,224,48,0,0,0,0,0,63,224,56,0,0,0,0,0,63,224,56,0,0,0,0,0,63,224,56,0,0,0,0,0,31,224,112,0,0,0,0,0,31,248,240,0,0,0,0,0,15,255,224,0,0,0,0,0,1,255,192,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,255,192,0,0,0,0,0,31,255,240,0,0,0,0,0,63,255,252,0,0,0,0,0,63,255,254,0,0,0,0,0,63,255,255,0,0,0,0,0,63,255,131,128,0,0,0,0,63,255,1,128,0,0,0,0,63,255,1,192,0,0,0,0,31,255,1,192,0,0,0,0,31,255,1,192,0,0,0,0,15,255,1,128,0,0,0,0,1,255,131,128,0,0,0,0,0,7,255,0,0,0,0,0,0,1,254,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,255,128,0,0,0,0,0,31,255,240,0,0,0,0,0,63,255,252,0,0,0,0,0,63,255,254,0,0,0,0,0,63,255,255,128,0,0,0,0,63,255,255,192,0,0,0,0,63,255,255,224,0,0,0,0,63,255,255,240,0,0,0,0,31,255,255,248,0,0,0,0,31,255,255,252,0,0,0,0,15,255,254,30,0,0,0,0,1,255,252,14,0,0,0,0,0,7,248,6,0,0,0,0,0,1,248,6,0,0,0,0,0,0,120,6,0,0,0,0,0,0,60,14,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,255,128,0,0,0,0,0,31,255,240,0,0,0,0,0,57,207,248,0,0,0,0,0,59,158,126,0,0,0,0,0,51,185,255,128,0,0,0,0,51,59,199,192,0,0,0,0,51,51,159,224,0,0,0,0,59,179,63,240,0,0,0,0,31,187,56,248,0,0,0,0,31,255,115,252,0,0,0,0,15,255,119,254,0,0,0,0,1,127,239,14,0,0,0,0,0,7,254,63,0,0,0,0,0,0,252,255,0,0,0,0,0,0,125,255,128,0,0,0,0,0,63,129,192,0,0,0,0,0,31,159,192,0,0,0,0,0,15,127,192,0,0,0,0,0,7,255,192,0,0,0,0,0,3,224,224,0,0,0,0,0,3,192,96,0,0,0,0,0,3,192,112,0,0,0,0,0,1,128,112,0,0,0,0,0,1,192,96,0,0,0,0,0,1,192,224,0,0,0,0,0,0,225,224,0,0,0,0,0,0,255,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,255,128,0,0,0,0,0,31,255,192,0,0,0,0,0,56,121,252,0,0,0,0,0,56,225,254,0,0,0,0,0,48,195,255,0,0,0,0,0,48,195,131,128,0,0,0,0,48,199,7,224,0,0,0,0,56,199,15,240,0,0,0,0,28,231,30,120,0,0,0,0,31,247,56,28,0,0,0,0,15,255,56,28,0,0,0,0,1,63,176,252,0,0,0,0,0,3,241,255,0,0,0,0,0,1,243,207,128,0,0,0,0,0,127,131,128,0,0,0,0,0,63,1,128,0,0,0,0,0,31,15,192,0,0,0,0,0,15,63,192,0,0,0,0,0,7,127,192,0,0,0,0,0,7,224,224,0,0,0,0,0,3,192,96,0,0,0,0,0,1,192,112,0,0,0,0,0,1,206,112,0,0,0,0,0,1,255,240,0,0,0,0,0,1,255,224,0,0,0,0,0,0,224,224,0,0,0,0,0,0,224,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,254,112,0,0,0,0,0,1,255,112,0,0,0,0,0,1,255,240,0,0,0,0,0,1,193,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,192,0,0,0,0,0,1,193,192,0,0,0,0,0,1,255,128,0,0,0,0,0,0,255,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,243,192,0,0,0,0,0,31,255,240,0,0,0,0,0,56,31,248,0,0,0,0,0,56,60,56,0,0,0,0,0,48,56,28,0,0,0,0,0,48,48,31,192,0,0,0,0,48,112,63,224,0,0,0,0,56,112,120,240,0,0,0,0,28,48,112,48,0,0,0,0,31,248,224,56,0,0,0,0,15,254,224,56,0,0,0,0,1,31,224,124,0,0,0,0,0,7,225,255,0,0,0,0,0,0,115,255,128,0,0,0,0,0,127,131,128,0,0,0,0,0,63,1,192,0,0,0,0,0,31,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,3,192,0,0,0,0,0,7,63,128,0,0,0,0,0,3,255,192,0,0,0,0,0,1,241,224,0,0,0,0,0,0,224,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,255,224,0,0,0,0,0,0,255,224,0,0,0,0,0,0,227,192,0,0,0,0,0,1,192,224,0,0,0,0,0,1,128,224,0,0,0,0,0,1,128,96,0,0,0,0,0,1,192,96,0,0,0,0,0,3,248,224,0,0,0,0,0,7,252,224,0,0,0,0,0,15,31,192,0,0,0,0,0,14,15,128,0,0,0,0,0,28,7,0,0,0,0,0,0,124,7,0,0,0,0,0,0,255,7,0,0,0,0,0,1,255,135,0,0,0,0,0,3,131,142,0,0,0,0,0,7,1,222,0,0,0,0,0,7,1,252,0,0,0,0,0,7,1,248,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,3,131,128,0,0,0,0,0,1,255,0,0,0,0,0,0,0,254,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,224,0,0,0,0,0,56,31,252,0,0,0,0,0,56,31,254,0,0,0,0,0,48,15,14,0,0,0,0,0,48,14,7,0,0,0,0,0,48,28,7,0,0,0,0,0,56,28,3,0,0,0,0,0,28,60,3,240,0,0,0,0,31,252,7,252,0,0,0,0,15,254,15,254,0,0,0,0,1,7,254,14,0,0,0,0,0,3,252,7,0,0,0,0,0,0,252,7,0,0,0,0,0,0,28,7,0,0,0,0,0,0,28,7,0,0,0,0,0,0,14,7,0,0,0,0,0,0,15,30,0,0,0,0,0,0,7,255,128,0,0,0,0,0,3,255,192,0,0,0,0,0,0,224,224,0,0,0,0,0,1,192,96,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,255,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,255,128,0,0,0,0,0,1,227,192,0,0,0,0,0,1,192,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,1,128,224,0,0,0,0,0,7,193,192,0,0,0,0,0,31,243,192,0,0,0,0,0,63,255,128,0,0,0,0,0,56,62,0,0,0,0,0,0,112,24,0,0,0,0,0,7,112,28,0,0,0,0,62,31,240,28,0,0,0,0,255,63,240,28,0,0,0,1,255,248,240,24,0,0,0,1,193,240,56,56,0,0,0,3,128,224,63,240,0,0,0,3,128,224,63,224,0,0,0,3,128,224,63,192,0,0,0,3,128,224,56,0,0,0,0,3,128,240,112,0,0,0,0,1,193,253,240,0,0,0,0,1,255,191,224,0,0,0,0,0,255,15,128,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,56,28,56,0,0,0,0,0,56,28,255,0,0,0,0,0,48,13,255,128,0,0,0,0,48,15,195,128,0,0,0,0,48,15,129,192,0,0,0,0,56,31,1,192,0,0,0,0,28,63,0,192,0,0,0,0,31,251,0,192,0,0,0,0,15,243,1,192,0,0,0,0,1,3,131,192,0,0,0,0,0,1,239,254,0,0,0,0,0,0,255,255,0,0,0,0,0,0,127,199,128,0,0,0,0,0,3,129,192,0,0,0,0,0,3,1,192,0,0,0,0,0,7,0,192,0,0,0,0,0,7,0,192,0,0,0,0,0,3,1,192,0,0,0,0,0,3,129,192,0,0,0,0,0,1,199,128,0,0,0,0,0,1,255,0,0,0,0,0,0,0,126,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,127,128,0,0,0,0,0,0,255,224,0,0,0,0,0,0,224,224,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,192,96,0,0,0,0,0,0,240,224,0,0,0,0,0,0,127,192,0,15,224,0,0,3,255,128,0,63,240,0,0,15,254,0,0,56,120,0,0,31,248,0,0,112,56,0,0,28,60,0,0,112,24,0,0,56,28,0,0,96,24,0,0,56,12,0,0,96,24,224,0,48,14,0,0,112,27,248,63,184,12,0,0,120,63,252,127,248,28,0,0,60,255,30,241,252,60,0,0,31,252,14,224,255,248,0,0,7,220,7,192,127,240,0,0,0,28,7,192,115,192,0,0,0,28,7,192,112,0,0,0,0,28,7,192,112,0,0,0,0,14,14,224,96,0,0,0,0,15,188,241,224,0,0,0,0,7,252,127,192,0,0,0,0,1,240,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,48,12,63,128,0,0,0,0,48,12,127,192,0,0,0,0,48,12,241,224,0,0,0,0,56,28,192,224,0,0,0,0,28,57,192,112,0,0,0,0,31,249,192,112,0,0,0,0,15,241,192,112,0,0,0,0,1,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,0,0,0,0,0,0,0,0,127,128,0,0,0,0,0,0,255,192,0,0,0,0,0,0,225,192,0,0,0,0,0,1,192,224,0,0,0,0,0,1,192,96,0,0,0,0,0,1,128,96,1,248,0,0,0,1,128,96,3,254,0,0,0,1,192,96,7,142,0,0,0,1,192,224,15,7,0,0,0,0,243,192,14,3,0,0,0,0,127,128,14,3,128,0,0,0,31,0,12,3,128,0,0,0,0,0,14,3,0,0,0,0,0,0,14,7,0,0,0,0,254,0,7,15,0,0,0,1,255,0,3,254,0,0,0,3,231,128,1,252,0,0,0,3,129,192,0,0,0,0,0,3,1,192,0,7,192,0,0,7,0,192,0,15,240,0,0,7,0,192,0,31,248,0,0,3,1,192,0,56,56,0,0,3,129,192,0,48,28,0,0,1,199,128,0,112,28,0,0,241,255,0,0,112,28,0,3,252,126,0,0,112,28,62,7,254,0,0,0,48,28,255,15,7,0,0,0,56,57,255,142,7,0,0,0,31,243,129,204,3,0,0,0,15,243,129,204,3,0,0,0,3,195,0,204,3,0,0,0,0,3,0,206,7,0,0,0,0,3,0,199,14,0,0,0,0,3,129,199,254,0,0,0,0,3,195,131,252,0,0,0,0,1,255,128,224,0,0,0,0,0,255,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,31,192,0,0,0,0,48,12,63,224,0,0,0,0,56,28,120,240,0,0,0,0,28,56,112,48,0,0,0,0,31,248,224,56,0,0,0,0,15,240,224,56,0,0,0,0,1,0,224,56,0,0,126,0,0,0,224,56,0,0,255,0,0,0,112,112,0,1,231,128,0,0,120,240,0,3,129,192,0,0,63,224,0,3,129,192,0,0,15,128,0,3,0,192,0,0,0,0,0,3,0,192,0,0,0,14,0,3,128,192,0,0,0,63,128,3,129,192,0,0,0,127,192,1,195,128,0,0,0,241,224,1,255,128,0,0,0,224,112,0,126,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,56,0,0,0,0,224,224,0,254,0,0,0,0,255,224,1,255,0,0,0,0,127,192,3,135,128,0,0,0,31,0,7,3,128,0,0,0,0,0,7,1,192,0,0,0,0,0,6,1,192,0,0,0,0,0,7,1,192,0,0,3,248,0,7,1,128,0,0,7,252,0,3,131,128,0,0,15,30,0,3,207,0,0,0,14,7,0,1,254,0,0,0,28,7,0,0,124,0,0,0,28,7,0,0,0,63,128,0,28,7,0,0,0,255,192,0,28,7,0,0,0,225,224,62,14,14,0,0,1,192,224,255,15,190,0,0,1,192,97,255,135,252,0,0,1,128,97,193,193,240,0,0,1,128,99,128,224,0,0,0,1,192,99,128,224,0,0,0,1,192,227,128,224,0,0,0,0,243,195,128,224,0,0,0,0,127,129,128,224,0,0,0,0,63,1,225,192,0,0,0,0,0,0,255,128,0,0,0,0,0,0,127,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,7,192,0,0,0,0,48,12,31,224,0,0,15,192,56,28,63,240,0,0,31,240,28,56,56,56,0,0,60,240,31,248,112,56,0,0,112,56,15,240,112,24,0,0,112,24,1,0,96,24,0,0,112,28,0,0,112,24,0,0,112,28,0,0,112,56,0,0,112,24,0,0,56,120,0,0,112,56,0,0,63,240,0,0,60,120,0,0,31,224,0,0,31,240,0,0,7,128,0,0,15,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,63,192,0,112,0,0,0,0,127,224,3,252,0,0,0,0,224,224,7,254,0,0,0,0,192,112,7,7,0,0,0,1,192,112,14,7,0,0,0,1,192,48,14,3,128,0,0,1,192,112,14,3,128,0,0,0,224,112,14,3,128,0,0,0,224,224,14,3,0,0,0,0,127,224,7,7,0,0,0,0,63,128,7,254,0,0,0,0,15,0,3,254,0,0,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,1,240,0,0,31,248,0,0,7,252,0,0,28,56,0,0,15,254,0,0,56,28,0,0,14,14,0,0,48,12,0,0,28,7,0,0,48,12,0,0,28,7,0,224,48,12,0,0,28,7,7,248,56,28,0,0,28,7,15,252,56,28,0,0,12,7,30,30,30,120,0,0,14,14,28,14,15,240,0,0,7,252,24,6,7,224,0,0,3,248,24,6,0,0,0,0,1,224,24,6,0,0,0,0,0,0,28,14,0,0,0,0,0,0,30,14,0,0,0,0,0,0,15,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,1,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,48,12,0,0,0,0,1,192,48,12,3,128,0,0,7,240,48,12,15,224,0,0,15,252,56,28,63,240,0,0,30,28,28,56,56,120,0,0,28,14,31,248,112,56,0,0,56,14,15,240,112,28,0,0,56,14,1,0,112,28,0,0,56,14,0,0,112,28,0,0,24,14,0,0,112,24,0,0,28,28,0,0,56,56,0,0,15,252,0,0,63,240,0,0,15,248,0,0,31,240,0,0,3,224,0,0,7,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,0,0,63,128,3,254,0,0,0,0,127,192,7,143,0,0,0,0,241,224,14,7,0,0,0,0,224,112,14,3,0,0,0,0,192,112,12,3,0,0,0,0,192,112,12,3,0,0,0,0,192,48,14,3,0,0,0,0,192,112,14,7,0,0,0,0,224,112,7,142,0,0,0,0,241,224,3,254,0,0,0,0,127,192,1,248,0,0,0,0,31,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,224,0,0,7,192,0,0,15,248,0,0,31,240,0,0,31,252,0,0,63,248,0,0,28,28,0,0,56,56,0,0,56,14,0,0,112,28,0,0,56,14,0,0,112,28,0,0,56,14,0,0,112,28,0,0,56,14,15,240,112,28,0,0,24,14,31,248,112,24,0,0,30,60,60,56,60,120,0,0,15,252,56,28,63,240,0,0,7,240,48,12,15,224,0,0,3,224,48,12,7,192,0,0,0,0,48,12,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,31,248,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,240,0,0,0,0,0,0,15,248,0,0,0,0,0,0,31,252,0,0,0,0,0,0,28,30,0,0,0,0,0,0,24,14,0,0,0,0,0,0,56,14,0,0,0,0,3,240,56,6,0,0,0,0,7,248,24,14,3,224,0,0,15,60,28,14,15,240,0,0,28,14,30,28,31,248,0,0,28,14,15,252,28,28,0,0,24,6,7,248,56,28,0,0,24,6,1,192,48,12,0,0,24,6,0,0,48,12,0,0,28,14,0,0,56,12,0,0,14,28,0,0,56,28,0,0,15,252,0,0,60,60,0,0,3,240,0,0,31,248,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,0,0,0,0,248,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,254,0,0,0,0,31,128,7,7,0,0,0,0,127,192,14,3,0,0,0,0,113,224,14,3,128,0,0,0,224,96,12,3,128,0,0,0,192,112,14,3,0,0,0,1,192,112,14,7,0,0,0,1,192,48,7,7,0,0,0,0,192,112,3,254,0,0,0,0,224,112,1,252,0,0,0,0,241,224,0,96,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,248,0,0,15,192,0,0,28,56,0,0,63,224,0,0,56,28,0,0,120,240,0,0,56,12,0,0,112,120,0,0,48,12,0,0,96,56,0,0,48,12,7,128,224,56,0,0,56,12,31,224,224,56,0,0,56,28,63,240,224,56,0,0,30,120,56,120,112,56,0,0,15,240,112,56,120,240,0,0,7,224,112,24,63,224,0,0,0,0,96,24,15,192,0,0,0,0,96,24,0,0,0,0,0,0,112,24,0,0,0,0,0,0,120,56,0,0,0,0,0,0,62,240,0,0,0,0,0,0,31,224,0,0,0,0,0,0,15,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,124,0,0,0,0,0,0,1,254,0,0,0,0,0,0,3,255,0,0,0,0,0,0,7,7,128,0,0,0,0,0,7,3,128,0,0,0,0,224,6,1,128,0,0,0,3,248,6,1,128,0,0,0,7,252,6,1,128,0,0,0,14,14,7,3,128,0,0,0,12,6,7,135,129,240,0,0,28,7,3,255,7,252,0,0,28,7,1,254,15,158,0,0,28,7,0,120,14,14,0,0,28,7,0,0,28,7,0,0,14,14,0,0,28,7,0,0,15,254,0,0,28,7,0,0,7,252,0,0,28,7,0,0,1,240,0,0,14,7,0,0,0,0,0,0,14,30,0,0,0,0,0,0,7,252,0,0,248,0,0,0,3,248,0,3,252,0,0,0,0,0,0,7,254,0,0,0,0,0,0,7,7,0,0,0,0,0,0,14,3,0,0,0,0,0,0,14,3,128,0,0,0,31,128,14,3,128,0,0,0,127,192,14,3,128,0,0,0,241,224,14,3,0,0,0,0,224,224,7,7,0,0,0,1,192,112,7,254,0,0,0,1,192,112,1,252,0,0,0,1,192,112,0,96,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,15,224,0,0,0,63,128,0,31,240,0,0,0,0,0,0,60,120,0,0,0,0,0,0,112,56,0,0,31,0,0,0,112,24,0,0,127,192,0,0,96,28,0,0,241,224,0,0,112,28,0,0,224,224,0,0,112,24,14,1,192,96,0,0,120,56,63,129,192,112,0,0,60,240,127,225,192,112,0,0,31,240,224,225,192,112,0,0,15,192,192,113,192,224,0,0,0,1,192,112,241,224,0,0,0,1,192,112,127,192,0,0,0,1,192,112,63,128,0,0,0,0,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,255,224,0,0,0,0,0,0,63,192,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,128,0,0,0,0,0,0,63,224,0,0,0,0,0,0,127,240,0,0,0,0,0,0,112,112,0,0,0,1,248,0,224,56,0,0,0,3,252,0,224,56,0,0,0,7,142,0,224,56,0,0,0,15,7,0,224,56,0,0,0,14,3,0,112,56,0,0,0,12,3,0,120,112,0,0,0,12,3,128,63,224,0,0,0,14,3,0,31,192,124,0,0,14,7,0,3,1,255,0,0,7,15,0,0,3,207,128,0,3,254,0,0,3,131,128,0,1,252,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,252,0,0,0,7,1,192,3,254,0,0,0,7,3,128,7,143,0,0,0,3,135,128,7,7,0,0,0,1,255,0,14,3,128,0,0,0,254,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,7,7,0,0,0,0,0,0,7,143,0,0,0,0,63,0,3,254,0,0,0,0,127,128,1,252,0,0,0,0,243,192,0,0,0,0,0,1,192,224,0,0,0,0,0,1,128,224,0,0,0,0,0,1,128,96,0,15,0,0,0,1,128,96,0,63,192,0,0,1,128,224,0,127,224,0,0,1,192,224,0,112,240,0,0,0,227,192,0,224,112,0,0,0,255,128,0,224,56,0,0,0,63,0,0,192,56,0,0,56,0,0,0,192,48,0,0,254,0,0,0,224,112,0,3,255,0,0,0,112,112,124,3,135,128,0,0,127,224,255,7,3,128,0,0,63,193,255,135,1,128,0,0,15,131,131,134,1,192,0,0,0,7,1,199,1,128,0,0,0,7,1,199,1,128,0,0,0,7,1,199,131,128,0,0,0,7,1,195,239,0,0,0,0,3,1,129,254,0,0,0,0,3,135,128,124,0,0,0,0,1,255,0,0,0,0,0,0,0,254,0,0,0,0,0,0,0,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,124,0,0,0,0,112,0,1,254,0,0,0,1,252,0,1,255,0,0,0,3,255,0,3,131,128,0,0,7,135,0,7,1,128,0,0,7,3,128,7,1,192,0,0,6,3,128,7,1,192,0,0,14,1,128,7,1,192,0,0,6,1,128,7,1,128,0,0,7,3,128,3,131,128,0,0,7,7,0,3,255,0,0,0,3,223,0,1,254,0,0,0,1,254,0,0,120,0,0,0,0,248,0,0,0,14,0,0,120,0,0,0,0,127,128,1,254,0,0,0,0,255,192,3,255,0,0,0,0,225,224,7,7,0,0,0,1,192,224,6,3,128,0,0,1,192,96,14,3,128,0,0,1,128,96,14,3,128,0,0,1,128,96,14,3,128,0,0,1,192,224,6,3,128,0,0,1,224,224,7,7,0,0,0,0,255,192,3,255,0,0,0,0,127,128,1,254,0,0,0,0,30,0,0,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,0,0,0,0,254,0,0,63,128,0,0,1,255,0,0,255,192,0,0,3,199,128,0,225,224,0,0,3,3,128,1,192,224,0,0,7,1,192,1,128,96,0,0,7,1,192,1,128,96,0,0,7,1,192,1,128,96,0,0,7,1,192,1,192,224,0,0,3,131,128,1,224,224,0,0,3,239,128,0,251,193,224,7,225,255,0,0,127,135,248,15,240,124,0,0,30,15,252,30,120,0,0,0,0,30,28,56,28,0,0,0,0,28,14,56,28,0,0,0,0,24,14,48,12,0,0,0,0,56,6,48,12,0,0,0,0,56,14,48,12,0,0,0,0,28,14,56,28,0,0,0,0,30,28,28,56,0,0,0,0,15,252,31,248,0,0,0,0,7,248,7,240,0,0,0,0,1,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,1,255,0,0,0,0,0,0,3,231,128,0,0,0,0,0,3,131,128,0,0,0,0,0,7,1,192,0,7,240,0,0,7,1,192,0,15,248,0,0,7,1,192,0,30,28,0,0,7,1,192,0,28,14,0,0,3,129,192,0,56,14,0,0,3,199,128,0,56,14,0,0,1,255,0,0,56,14,0,0,0,254,0,0,56,14,0,0,252,0,0,0,28,28,0,1,255,0,0,0,30,60,0,3,135,128,0,0,15,248,0,7,3,128,0,0,3,240,0,7,1,128,0,0,0,0,0,6,1,128,0,0,0,0,0,6,1,128,0,0,0,14,0,7,1,128,0,0,0,63,128,7,3,128,0,0,0,127,224,3,207,0,0,0,0,224,224,1,254,0,0,0,0,224,112,0,252,0,0,0,1,192,112,0,0,0,0,0,1,192,48,0,0,0,0,0,1,192,112,0,124,0,0,0,0,192,112,0,255,0,0,0,0,224,224,1,239,128,0,0,0,127,224,3,131,192,0,0,0,63,192,3,1,192,0,0,0,31,0,3,0,192,0,0,0,0,0,3,0,192,0,0,7,240,0,3,1,192,0,0,15,248,0,3,129,192,0,0,30,60,0,3,195,128,0,0,28,28,0,1,255,128,0,0,56,14,0,0,254,63,128,0,56,14,0,0,56,127,192,0,56,14,0,0,0,249,224,124,56,14,0,0,0,224,224,255,28,12,0,0,1,192,113,255,158,60,0,0,1,192,115,195,143,248,0,0,1,192,115,129,199,240,0,0,1,192,115,0,192,0,0,0,0,224,99,0,192,0,0,0,0,241,227,0,192,0,0,0,0,127,195,129,192,0,0,0,0,63,131,195,128,0,0,0,0,0,1,255,128,0,0,0,0,0,0,255,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,127,128,0,0,0,0,0,0,255,192,0,0,0,0,0,1,193,192,0,0,0,0,0,1,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,1,128,224,0,0,0,0,0,1,193,192,0,0,0,0,0,60,255,128,0,0,0,0,0,255,127,0,0,0,0,0,1,255,158,0,0,0,62,0,3,195,128,0,0,0,127,128,3,129,192,0,0,0,255,192,3,1,192,0,0,1,193,192,7,0,192,0,0,1,128,224,3,0,192,0,0,3,128,224,3,1,192,0,0,3,128,96,3,129,192,0,0,3,128,224,1,231,128,0,0,1,192,224,0,255,0,0,0,1,225,192,0,126,0,0,0,0,255,192,0,0,0,0,0,0,127,128,0,252,0,0,0,0,30,0,1,254,0,0,0,0,0,0,3,223,0,0,0,0,0,0,7,7,128,0,0,0,127,0,6,3,128,0,0,0,255,128,6,1,128,0,0,1,227,192,6,1,128,0,0,3,129,192,6,3,128,0,0,3,128,224,7,3,128,0,0,3,128,224,7,135,0,0,0,3,128,224,3,255,0,0,0,3,128,192,1,254,112,0,0,3,129,192,0,51,252,0,0,1,231,128,0,7,254,0,0,124,255,0,0,7,15,0,0,255,126,0,0,14,7,0,1,255,128,0,0,12,3,7,3,131,128,0,0,12,3,31,195,1,192,0,0,12,3,63,231,1,192,0,0,14,7,120,247,0,192,0,0,14,7,112,63,1,192,0,0,7,158,224,59,129,192,0,0,3,252,224,59,195,128,0,0,1,248,224,57,255,0,0,0,0,0,96,56,254,0,0,0,0,0,112,112,56,0,0,0,0,0,127,240,0,0,0,0,0,0,63,224,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,128,0,0,0,0,0,0,127,192,0,0,0,0,0,0,241,224,0,0,0,0,0,0,224,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,28,224,224,0,0,0,0,0,127,241,224,0,0,0,0,0,255,255,192,0,0,0,0,1,225,223,128,0,0,0,0,1,192,224,0,0,0,0,0,1,128,96,0,0,0,0,0,1,128,96,0,0,0,0,0,1,128,96,0,0,0,0,0,1,192,224,0,0,0,0,0,1,193,192,0,0,0,0,0,0,255,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,126,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,254,0,0,0,0,31,0,7,7,0,0,0,0,127,128,14,7,0,0,0,0,255,224,14,3,128,0,0,0,224,224,14,3,128,0,0,1,192,112,14,3,128,0,0,1,192,112,14,7,0,0,0,1,192,112,7,7,0,0,0,1,192,112,7,254,0,0,0,0,192,96,3,254,0,0,0,0,240,224,0,255,128,0,0,0,127,192,0,63,224,0,0,0,63,128,0,124,240,0,0,7,238,0,0,112,120,0,0,31,240,0,0,224,56,0,0,28,120,0,0,224,56,0,0,56,24,0,0,224,56,0,0,48,28,0,0,224,59,224,0,112,28,0,0,112,63,248,63,112,28,0,0,120,255,252,127,240,28,0,0,63,252,28,243,248,24,0,0,31,216,15,192,252,120,0,0,0,56,15,192,255,240,0,0,0,56,15,128,111,224,0,0,0,56,15,128,96,0,0,0,0,24,15,128,224,0,0,0,0,28,29,192,224,0,0,0,0,15,253,225,192,0,0,0,0,7,248,255,192,0,0,0,0,1,224,127,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,31,224,0,0,0,0,0,0,61,240,0,0,0,0,0,0,112,120,0,0,0,0,0,0,112,56,0,0,0,0,0,0,96,24,0,0,0,0,0,0,224,24,0,0,0,0,0,15,224,24,0,0,0,0,0,63,240,56,0,0,0,0,0,121,248,112,0,0,0,0,0,112,127,224,0,0,0,0,0,224,63,192,0,0,0,0,0,224,63,0,0,0,0,0,0,224,56,0,0,0,0,0,0,224,56,0,0,0,0,0,0,224,112,0,0,0,0,0,0,120,112,0,0,0,0,0,0,255,224,0,0,0,0,0,3,255,192,0,0,0,0,0,7,255,0,0,0,0,0,0,7,7,0,0,0,0,0,0,14,3,0,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,7,0,0,0,0,0,0,7,7,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,254,0,0,0,0,0,0,0,255,0,0,0,0,0,0,1,239,128,0,0,0,0,0,3,131,192,0,0,0,0,0,3,1,192,0,0,0,0,0,7,0,192,0,0,0,0,0,7,0,192,0,0,7,240,0,3,1,192,0,0,15,248,0,3,129,192,0,0,30,60,0,3,195,252,0,0,28,14,0,1,255,254,0,0,24,14,0,0,255,143,0,0,56,6,0,0,63,7,0,7,248,6,0,0,14,3,190,31,248,14,0,0,14,3,255,63,252,30,0,0,14,3,255,184,63,60,0,0,14,3,193,240,31,248,0,0,7,7,128,240,31,240,0,0,7,143,128,240,28,0,0,0,3,255,128,240,28,0,0,0,1,255,128,240,24,0,0,0,0,3,128,248,56,0,0,0,0,1,193,255,240,0,0,0,0,1,255,159,224,0,0,0,0,0,255,7,128,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,28,60,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,7,240,14,0,0,0,0,0,15,248,14,0,0,0,0,0,30,56,12,0,0,0,0,0,60,28,28,0,0,0,0,0,56,31,120,0,0,0,0,0,56,15,248,0,0,0,0,0,56,15,224,0,0,0,0,0,56,14,0,0,0,0,0,0,252,28,0,0,0,0,0,1,255,60,0,0,0,0,0,3,207,248,0,0,0,0,0,3,7,224,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,3,131,128,0,0,0,0,0,3,239,128,0,0,0,0,0,3,255,0,0,0,0,0,0,7,255,0,0,0,0,0,0,14,7,0,0,0,0,0,0,14,3,0,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,7,0,0,0,0,0,0,7,143,128,0,0,0,0,0,3,255,192,0,0,0,0,0,1,255,224,0,0,0,0,0,1,224,224,0,0,0,0,0,1,192,96,0,0,0,0,0,1,128,112,0,0,0,0,0,1,128,112,0,0,0,0,0,1,192,126,0,0,0,0,0,1,192,255,0,0,0,0,0,0,225,199,128,0,0,0,0,0,127,193,252,31,128,0,0,0,63,1,255,127,192,0,0,0,7,1,255,240,224,0,0,0,7,1,193,224,112,0,0,0,7,1,193,192,112,0,0,0,3,131,128,224,48,0,0,0,3,239,128,224,48,0,0,0,1,255,128,224,112,0,0,0,0,127,129,224,112,0,0,0,0,1,195,249,224,0,0,0,0,1,255,255,192,0,0,0,0,0,255,31,128,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,248,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,158,0,0,0,0,0,0,126,6,0,0,0,0,0,1,252,7,0,0,0,0,0,3,252,7,0,0,0,0,0,7,156,7,0,0,0,0,0,7,28,7,0,0,0,0,0,6,14,7,0,0,0,0,0,30,15,30,0,0,0,0,0,126,7,252,0,0,0,0,0,119,3,248,0,0,0,0,0,231,7,128,0,0,0,0,0,195,223,0,0,0,0,0,1,193,254,0,0,0,0,0,1,192,248,0,0,0,0,0,1,192,112,0,0,0,0,0,3,224,112,0,0,0,0,0,3,240,224,0,0,0,0,0,7,127,192,0,0,0,0,0,6,63,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,1,128,0,0,0,0,0,6,3,128,0,0,0,0,0,7,3,128,0,0,0,0,0,7,135,0,0,0,0,0,0,7,255,0,0,0,0,0,0,15,255,0,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,7,7,128,0,0,0,0,0,7,255,192,0,0,0,0,0,3,254,224,0,0,0,0,0,3,248,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,248,0,0,0,0,0,3,128,252,0,0,0,0,0,1,193,254,0,0,0,0,0,1,227,206,0,0,0,0,0,0,255,135,224,0,0,0,0,0,63,7,240,0,0,0,0,0,28,7,120,0,0,0,0,0,28,6,24,0,0,0,0,0,28,14,28,0,0,0,0,0,15,28,28,0,0,0,0,0,7,252,28,0,0,0,0,0,3,240,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,60,120,0,0,0,0,0,0,31,240,0,0,0,0,0,0,15,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,254,0,0,0,0,0,0,7,255,0,0,0,0,0,0,63,135,128,0,0,0,0,0,127,3,128,0,0,0,0,0,247,1,192,0,0,0,0,3,230,1,192,0,0,0,0,7,199,1,192,0,0,0,0,15,199,1,128,0,0,0,0,12,195,131,128,0,0,0,0,28,227,255,0,0,0,0,0,124,225,254,0,0,0,0,0,124,123,252,0,0,0,0,0,252,63,192,0,0,0,0,0,206,31,0,0,0,0,0,1,207,30,0,0,0,0,0,1,199,252,0,0,0,0,0,3,195,248,0,0,0,0,0,3,224,112,0,0,0,0,0,7,240,224,0,0,0,0,0,7,127,192,0,0,0,0,0,6,63,192,0,0,0,0,0,7,3,192,0,0,0,0,0,7,3,128,0,0,0,0,0,15,135,128,0,0,0,0,0,15,255,0,0,0,0,0,0,12,255,128,0,0,0,0,0,14,115,128,0,0,0,0,0,14,3,0,0,0,0,0,0,14,7,0,0,0,0,0,0,7,159,128,0,0,0,0,0,15,255,128,0,0,0,0,0,15,251,128,0,0,0,0,0,14,3,128,0,0,0,0,0,6,3,192,0,0,0,0,0,7,7,224,0,0,0,0,0,3,255,224,0,0,0,0,0,3,254,224,0,0,0,0,0,3,248,224,0,0,0,0,0,3,128,224,0,0,0,0,0,1,193,192,0,0,0,0,0,1,255,128,0,0,0,0,0,0,255,128,0,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,0,0,0,0,0,1,255,128,0,0,0,0,0,7,255,192,0,0,0,0,0,63,225,224,0,0,0,0,0,127,192,224,0,0,0,0,1,253,128,96,0,0,0,0,3,253,128,96,0,0,0,0,7,221,128,96,0,0,0,0,15,221,192,224,0,0,0,0,30,221,225,192,0,0,0,0,62,238,255,192,0,0,0,0,126,247,255,128,0,0,0,0,127,127,254,0,0,0,0,0,255,191,224,0,0,0,0,0,251,255,0,0,0,0,0,1,253,254,0,0,0,0,0,3,222,124,0,0,0,0,0,3,239,248,0,0,0,0,0,3,247,240,0,0,0,0,0,7,255,224,0,0,0,0,0,7,191,192,0,0,0,0,0,7,207,192,0,0,0,0,0,7,231,192,0,0,0,0,0,7,255,128,0,0,0,0,0,7,63,128,0,0,0,0,0,3,207,0,0,0,0,0,0,3,254,0,0,0,0,0,0,0,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,128,0,0,0,0,0,3,255,224,0,0,0,0,0,15,255,240,0,0,0,0,0,63,240,112,0,0,0,0,0,255,224,56,0,0,0,0,1,255,224,56,0,0,0,0,1,255,224,56,0,0,0,0,3,255,224,56,0,0,0,0,3,255,224,48,0,0,0,0,3,255,248,112,0,0,0,0,3,255,255,224,0,0,0,0,3,255,255,192,0,0,0,0,3,255,255,0,0,0,0,0,1,255,224,0,0,0,0,0,0,255,128,0,0,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);
}

int frame = 0;
void loop() {
  display.clearDisplay();
  display.drawBitmap(32, 0, frames[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);
}
