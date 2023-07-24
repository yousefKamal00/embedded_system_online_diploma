#include "uart.h"
unsigned char name[100] = "learn-in-depth:<Yousef>";
unsigned char string[100];
void main(void){
	Uart_Send_string(name);
}