#include "bsp/bsp.h"

void APP_1ms(void);

#define INCREASE 1
#define DECREASE 0

uint8_t brightness = 0;
uint16_t Value_Pote = 0;
uint8_t Calculo;

int main(void) {

	BSP_Init();

	while (1) {

		Value_Pote = Value_Potenciometro();

		if (Value_Pote <= 491) {
			rgb_setBright(RGB_ROJO, 100);
			rgb_setBright(RGB_AZUL, 0);
			rgb_setBright(RGB_VERDE, 100/491 * Value_Pote);
		}
		if (Value_Pote > 491 && Value_Pote <= 1065) {

			rgb_setBright(RGB_ROJO, 100 - (100/574 * (Value_Pote-492)));
			rgb_setBright(RGB_AZUL, 0);
			rgb_setBright(RGB_VERDE, 100);
		}
		if (Value_Pote > 1065 && Value_Pote <= 1720) {

			rgb_setBright(RGB_ROJO, 0);
			rgb_setBright(RGB_AZUL, 100 / 655 * (Value_Pote-1066));
			rgb_setBright(RGB_VERDE, 100);
		}
		if (Value_Pote > 1720 && Value_Pote <= 2416) {

			rgb_setBright(RGB_ROJO, 0);
			rgb_setBright(RGB_AZUL, 100);
			rgb_setBright(RGB_VERDE, 100 - (100/696 * (Value_Pote-1721)));
		}
		if (Value_Pote > 2416 && Value_Pote <= 3235) {

			rgb_setBright(RGB_ROJO, 100 / 819 * (Value_Pote-2417));
			rgb_setBright(RGB_AZUL, 100);
			rgb_setBright(RGB_VERDE, 0);
		}
		if (Value_Pote > 3235) {

			rgb_setBright(RGB_ROJO, 100);
			rgb_setBright(RGB_AZUL,100 - (100/860 * (Value_Pote-3236)));
			rgb_setBright(RGB_VERDE, 0);
		}

	}
}

void APP_1ms(void) {

}
