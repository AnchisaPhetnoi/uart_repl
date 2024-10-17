#include <stdio.h>
#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_16, GPIO_MODE_OUTPUT);
    while(1)
    {
        
    }
}
