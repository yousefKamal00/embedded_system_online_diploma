/*
 ============================================================================
 Name        : LIFO.c
 Author      : ME
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "LIFO.h"

#define Print(...) {printf(__VA_ARGS__); \
fflush(stdin); fflush(stdout);}
#define BUF1_length 5

element_type buffer_1[BUF1_length],temp;
LIFO_Buf buffer;

int main(void){

	if(buf_init(&buffer,BUF1_length,buffer_1)==LIFO_no_error)
		Print("buffer initialized successfully\n");

	for(int i=0;i<7;i++){
		Print("LIFO push : %d\n",i);
		if(buf_add(&buffer,i)==LIFO_no_error)
			{Print("LIFO push : %d____done\n",i);}
		else if(buf_add(&buffer,i)==LIFO_full)
			{Print("LIFO is full\n");}
		else
			{Print("LIFO push : %d____failed\n",i);}
	}

	for(int i=0;i<7;i++){
			Print("LIFO pop :\n");
			if(buf_pop(&buffer,&temp)==LIFO_no_error)
				{Print("LIFO pop : %d____done\n",temp);}
			else if(buf_pop(&buffer,&temp)==LIFO_empty)
				{Print("LIFO is empty\n");}
			else
				{Print("LIFO pop : %d____failed\n",temp);}
		}
	return 0;
}
