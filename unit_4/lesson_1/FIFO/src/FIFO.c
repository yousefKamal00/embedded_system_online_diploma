#include "FIFO.h"

BUF_STATUS buf_full(FIFO_Buf* buf){
	if(!buf->base || !buf->head || !buf->tail)
		return FIFO_null;
	if(buf->count == buf->length){
		Print("FIFO is full\n");
		return FIFO_full;
	}
	return FIFO_no_error;
}

BUF_STATUS FIFO_init(FIFO_Buf* buf,uint32_t len,element_type* arr){
	buf->length = len;
	buf->count = 0;
	buf->base = arr;
	buf->head = buf->base;
	buf->tail = buf->base;
	if(buf->base && buf->length)
			return FIFO_no_error;
		else
			return FIFO_null;
}

BUF_STATUS FIFO_enqueue(FIFO_Buf* buf, element_type item){
	if(buf_full(buf) == FIFO_no_error){
		*(buf->head) = item;
		buf->count ++;

		if(buf->head == (buf->base + (buf->length * sizeof(element_type))))
			buf->head = buf->base;
		else
			buf->head ++;
		return FIFO_no_error;
	}

	else{
		Print("FIFO enqueue failed\n");
		return buf_full(buf);
	}
}

BUF_STATUS FIFO_dequeue(FIFO_Buf* buf, element_type* item){
	if(!buf->base || !buf->head || !buf->tail)
		return FIFO_null;

	if(buf->count == 0){
		Print("FIFO is empty");
		return FIFO_empty;
	}

	*item = *(buf->tail);
	buf->count --;
	if(buf->tail == (buf->base + (buf->length * sizeof(element_type))))
		buf->tail = buf->base;
	else
		buf->tail ++;
	return FIFO_no_error;
}

void FIFO_print(FIFO_Buf* buf){
	element_type* temp;
	if(buf->count == 0){
		Print("FIFO is empty");
	}
	else{
		temp = buf->tail;
		Print("\n________FIFO print________\n");
		for(int i=0;i < buf->count;i++){
			Print("\t %X \n",*temp);
			temp++;
		}
		Print("\n___________________________\n");
	}
}
