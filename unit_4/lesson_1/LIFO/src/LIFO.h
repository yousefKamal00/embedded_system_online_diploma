#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include "stdint.h"
#define element_type uint8_t

typedef struct{
	uint32_t length;
	uint32_t count;
	element_type* base;
	element_type* head;
}LIFO_Buf;

typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_not_full,
	LIFO_empty,
	LIFO_not_empty,
	LIFO_null
}BUF_STATUS;

BUF_STATUS buf_init(LIFO_Buf* buffer,uint32_t len,element_type* arr);
BUF_STATUS buf_add(LIFO_Buf* buffer,element_type item);
BUF_STATUS buf_pop(LIFO_Buf* buffer,element_type* item);
BUF_STATUS buf_full(LIFO_Buf* buffer);



#endif
