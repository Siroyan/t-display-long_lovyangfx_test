#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"

#include <LovyanGFX.hpp>
#include <lgfx_user/LGFX_ESP32S3_QSPI_AXS15231B.h>
static LGFX lcd;

extern "C" void app_main(void)
{
    lcd.init();
    lcd.setRotation(3);
    lcd.setBrightness(255);
    lcd.fillScreen(0xFFFFFFu);

    lcd.drawLine(10, 10, 10, 630, 0x000000U);
    lcd.drawLine(10, 10, 150, 10, 0x000000U);
    lcd.drawLine(150, 10, 150, 630, 0x000000U);
    lcd.drawLine(10, 630, 150, 630, 0x000000U);
    
    printf("Hello world!\n");
}
