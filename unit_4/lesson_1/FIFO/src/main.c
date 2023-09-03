#include <stdio.h>
#include "FIFO.h"

#define buf1_len 5
element_type buffer_1[buf1_len],tmp;


int main(void){
	FIFO_Buf fifo;
	if(FIFO_init(&fifo,buf1_len,buffer_1) == FIFO_no_error){
		Print("FIFO init done\n");
	}

	for(int i=0; i<7 ; i++){
		Print("____FIFO enqueue____\n");
		if(FIFO_enqueue(&fifo,i) == FIFO_no_error){
			Print("FIFO enqueue : %X___ Done\n",i);
		}
		else{
			Print("FIFO enqueue : %X___ Failed\n",i);
		}
	}

	FIFO_print(&fifo);
	FIFO_dequeue(&fifo,&tmp);
	Print("FIFO dequeue : %X___ Done\n",tmp);
	FIFO_dequeue(&fifo,&tmp);
	Print("FIFO dequeue : %X___ Done\n",tmp);
	FIFO_print(&fifo);

	for(int i=0; i<2 ; i++){
		element_type x = 100;
		Print("____FIFO enqueue____\n");
		if(FIFO_enqueue(&fifo,i) == FIFO_no_error){
			Print("FIFO enqueue : %X___ Done\n",i);
		}
		else{
			Print("FIFO enqueue : %X___ Failed\n",i);
		}
	}
	FIFO_print(&fifo);
}
