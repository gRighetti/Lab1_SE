#include "bsp/bsp.h"

void APP_1ms(void);

#define INCREASE 1
#define DECREASE 0


uint8_t brightness = 0;
uint16_t Value_Pote=0;
uint8_t Calculo;

int main(void) {

	BSP_Init();

	while (1) {

		Value_Pote = Value_Potenciometro();

		if(Value_Pote <=120){
					rgb_setBright(RGB_ROJO,100);
					rgb_setBright(RGB_AZUL,0);
					rgb_setBright(RGB_VERDE, 1000/120*Value_Pote);
		}
		if(Value_Pote>120 && Value_Pote<=260){

							rgb_setBright(RGB_ROJO, 1000-((1000/140)*Value_Pote));
							rgb_setBright(RGB_AZUL,0);
							rgb_setBright(RGB_VERDE, 100);
				}
		if(Value_Pote>260 && Value_Pote<=420){

									rgb_setBright(LED_ROJO, 0);
									rgb_setBright(LED_AZUL,0);
									rgb_setBright(LED_VERDE, 100);
						}
		if(Value_Pote>420 && Value_Pote<=590){

									rgb_setBright(LED_ROJO, 1000-((1000/140)*Value_Pote));
									rgb_setBright(LED_AZUL,0);
									rgb_setBright(LED_VERDE, 100);
						}
		if(Value_Pote>590 && Value_Pote<=790){

									rgb_setBright(LED_ROJO, 1000-((1000/140)*Value_Pote));
									rgb_setBright(LED_AZUL,0);
									rgb_setBright(LED_VERDE, 100);
						}
		if(Value_Pote>790){

									rgb_setBright(LED_ROJO, 1000-((1000/140)*Value_Pote));
									rgb_setBright(LED_AZUL,0);
									rgb_setBright(LED_VERDE, 100);
						}


	}
}

void APP_1ms(void) {


}
