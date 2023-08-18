#include <stdint.h>

extern void main(void);
//extern uint32_t stack_top;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;
extern uint32_t _E_text;

void Rest_Handler (void){
	uint32_t _data_size = (uint8_t*)&_E_data - (uint8_t*)&_S_data;
	uint32_t _bss_size = (uint8_t*)&_E_bss - (uint8_t*)&_S_bss;
	uint8_t* P_src = (uint8_t*)&_E_text;
	uint8_t* P_dst = (uint8_t*)&_S_data;
	for(int i=0; i < _data_size; i++){
		*((uint8_t*)P_dst++) = *((uint8_t*)P_src++);
	}
	
	P_dst = (uint8_t*)&_S_bss;
	for(int i=0; i < _bss_size; i++){
		*((uint8_t*)P_dst++) = (uint8_t)0;
	}
	
	main();
}
void Default_Handler (void){
	Rest_Handler();
}
static uint32_t stack_top[256];

void NMI_Handler(void)__attribute__((weak, alias ("Default_Handler")));
void H_fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));
void MM_fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));

void(* const g_p_fn_Vectors[])() __attribute__((section(".vectors"))) ={
	(void(*)()) ((unsigned long)(stack_top + sizeof(stack_top))),
	&Rest_Handler,
	&NMI_Handler,
	&H_fault_Handler,
	&MM_fault_Handler,
};