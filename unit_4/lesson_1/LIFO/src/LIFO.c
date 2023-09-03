#include "LIFO.h"


BUF_STATUS buf_init(LIFO_Buf* buffer,uint32_t len,element_type* arr){
	buffer->length = len;
	buffer->base = arr;
	buffer->head = buffer->base;
	buffer->count = 0;
	if(buffer->base && buffer->length)
		return LIFO_no_error;
	else
		return LIFO_null;
}

BUF_STATUS buf_full(LIFO_Buf* buffer){
	if(!buffer || !buffer->base || !buffer->head)
		return LIFO_null;

	if(buffer->count == buffer->length)
		return LIFO_full;
	else
		return LIFO_not_full;
}

BUF_STATUS buf_add(LIFO_Buf* buffer,element_type item){
	if(!buffer || !buffer->base || !buffer->head)
			return LIFO_null;
	if(buf_full(buffer) == LIFO_full)
			return LIFO_null;
	*(buffer->head) = item;
	buffer->head ++;
	buffer->count ++;
	return LIFO_no_error;
}

BUF_STATUS buf_pop(LIFO_Buf* buffer,element_type* item){
	if(!buffer || !buffer->base || !buffer->head)
			return LIFO_null;
	if(buffer->head == buffer->base)
			return LIFO_empty;
	buffer->head --;
	buffer->count --;
	*item = *(buffer->head);
	return LIFO_no_error;
}
