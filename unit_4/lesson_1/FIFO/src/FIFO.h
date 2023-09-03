/*
 * FIFO.h
 *
 *  Created on: Aug 25, 2023
 *      Author: Dr. Freeman
 */

#ifndef FIFO_H_
#define FIFO_H_

#include <stdio.h>
#include "stdint.h"
#define element_type uint8_t
#define Print(...) {printf(__VA_ARGS__); \
					fflush(stdin); \
					fflush(stdout);}

typedef struct{
	uint32_t length;
	uint32_t count;
	element_type* base;
	element_type* tail;
	element_type* head;
}FIFO_Buf;

typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_not_full,
	FIFO_empty,
	FIFO_not_empty,
	FIFO_null
}BUF_STATUS;

BUF_STATUS FIFO_init(FIFO_Buf* buf,uint32_t len,element_type* arr);
BUF_STATUS buf_full(FIFO_Buf* buf);
BUF_STATUS FIFO_enqueue(FIFO_Buf* buf, element_type item);
BUF_STATUS FIFO_dequeue(FIFO_Buf* buf, element_type* item);
void FIFO_print(FIFO_Buf* buf);

#endif /* FIFO_H_ */
