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
// 0.12*4095=491.4
		if (Value_Pote <= 491) {
			rgb_setBright(RGB_ROJO, 100);
			rgb_setBright(RGB_AZUL, 0);
			rgb_setBright(RGB_VERDE,(uint8_t) (( Value_Pote) * 100/491) );
		}
		if (Value_Pote > 491 && Value_Pote <= 1065) {
//0.26*4095=1064.7
			rgb_setBright(RGB_ROJO,(uint8_t)( 100 - ( (Value_Pote-492) * 100/573)));
			rgb_setBright(RGB_AZUL, 0);
			rgb_setBright(RGB_VERDE, 100);
		}
//0.42*4095=1719.9
		if (Value_Pote > 1065 && Value_Pote <= 1720) {

			rgb_setBright(RGB_ROJO, 0);
			rgb_setBright(RGB_AZUL,(uint8_t) ((Value_Pote-1066)* 100 / 654)  );
			rgb_setBright(RGB_VERDE, 100);
		}
//0.59*4095=2416.05
		if (Value_Pote > 1720 && Value_Pote <= 2416) {

			rgb_setBright(RGB_ROJO, 0);
			rgb_setBright(RGB_AZUL, 100);
			rgb_setBright(RGB_VERDE,(uint8_t)( 100 - ( (Value_Pote-1721) * 100/696 )));
		}
//0.78*4095=3194.1
		if (Value_Pote > 2416 && Value_Pote <= 3235) {

			rgb_setBright(RGB_ROJO, (uint8_t) ((Value_Pote-2417)* 100 / 818 ));
			rgb_setBright(RGB_AZUL, 100);
			rgb_setBright(RGB_VERDE, 0);
		}

		if (Value_Pote > 3235) {

			rgb_setBright(RGB_ROJO, 100);
			rgb_setBright(RGB_AZUL,(uint8_t) (100 - ((Value_Pote-3236)* 100/859 )));
			rgb_setBright(RGB_VERDE, 0);
		}

	}
}

void APP_1ms(void) {

}
