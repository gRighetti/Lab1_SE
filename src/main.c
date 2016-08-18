#include "bsp/bsp.h"

void APP_1ms(void);

#define INCREASE 1
#define DECREASE 0


uint8_t brightness = 0;

int main(void) {

	BSP_Init();

	while (1) {

		brightness = BSP_GetBrightness();

		led_setBright(LED_ROJO, brightness);
		led_setBright(LED_AZUL, brightness);
		led_setBright(LED_VERDE, brightness);
		led_setBright(LED_NARANJA, brightness);
	}
}

void APP_1ms(void) {


}
