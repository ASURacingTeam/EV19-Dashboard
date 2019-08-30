///*
// * tlc.c
// *
// *  Created on: Apr 25, 2019
// *      Author: A.SaleH
// */
//
//uint8_t LED_DC[12];
//uint8_t LED_DC_IN[12];
//uint8_t LED_GS[24];
//uint8_t LED_SID[24];
//
//void TLC5940_Init(void) {
//	HAL_GPIO_WritePin(LED_GS_GPIO_Port, LED_GS_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_DCPRG_GPIO_Port, LED_DCPRG_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_VPRG_GPIO_Port, LED_VPRG_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_XLAT_GPIO_Port, LED_XLAT_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_BLANK_GPIO_Port, LED_BLANK_Pin, GPIO_PIN_SET);
//}
//
//void TLC5940_clock_out_dc(void) {
//	HAL_GPIO_WritePin(LED_DCPRG_GPIO_Port, LED_DCPRG_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_VPRG_GPIO_Port, LED_VPRG_Pin, GPIO_PIN_SET);
//	HAL_SPI_TransmitReceive(&hspi1, dc_data, dc_data_in, 12, 100);
//	HAL_GPIO_WritePin(LED_XLAT_GPIO_Port, LED_XLAT_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_XLAT_GPIO_Port, LED_XLAT_Pin, GPIO_PIN_RESET);
//}
////void TLC5940_SetGS_And_GS_PWM(void) {
////	uint8_t firstCycleFlag = 0;
////
////	if (HAL_GPIO_ReadPin(LED_VPRG_GPIO_Port, LED_VPRG_Pin) == GPIO_PIN_SET) {
////		HAL_GPIO_WritePin(LED_VPRG_GPIO_Port, LED_VPRG_Pin, GPIO_PIN_RESET);
////		firstCycleFlag = 1;
////	}
////	uint16_t GSCLK_Counter = 0;
////	uint8_t Data_Counter = 0;
////	setLow(BLANK_PORT, BLANK_PIN);
////	for (;;) {
////		if (GSCLK_Counter > 4095) {
////			HAL_GPIO_WritePin(LED_BLANK_GPIO_Port, LED_BLANK_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(LED_XLAT_GPIO_Port, LED_XLAT_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(LED_XLAT_GPIO_Port, LED_XLAT_Pin, GPIO_PIN_RESET);
////			if (firstCycleFlag) {
////				pulse(SCLK_PORT, SCLK_PIN);
////				firstCycleFlag = 0;
////			}
////			break;
////		} else {
////			if (!(Data_Counter > TLC5940_N * 192 - 1)) {
////				if (gsData[Data_Counter])
////					setHigh(SIN_PORT, SIN_PIN);
////				else
////					setLow(SIN_PORT, SIN_PIN);
////				pulse(SCLK_PORT, SCLK_PIN);
////				Data_Counter++;
////			}
////		}
////		pulse(GSCLK_PORT, GSCLK_PIN);
////		GSCLK_Counter++;
////	}
////}
