#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// Pin definitions
#define TFT_CS    12
#define TFT_DC    10
#define TFT_RST   11

#define TFT_MOSI  13
#define TFT_MISO  14
#define TFT_SCLK   9

Adafruit_ILI9341 tft(TFT_CS, TFT_DC, TFT_RST);

void setup() {

  // Initialize SPI with your chosen pins
  SPI.begin(TFT_SCLK, TFT_MISO, TFT_MOSI, TFT_CS);

  tft.begin();

  tft.setRotation(1);

  tft.fillScreen(ILI9341_BLACK);

  tft.setCursor(40, 100);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(3);
  tft.print("Hello World");
}

void loop() {
}