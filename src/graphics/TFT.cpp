#include "configuration.h"

#ifdef ST7735_CS

#include <SPI.h>
#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip

TFT_eSPI tft = TFT_eSPI(); // Invoke library, pins defined in User_Setup.h

void TFTinit()
{
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLUE);
}

#endif
