/*
 * list.h
 *
 *  Created on: Aug 26, 2023
 *      Author: Dr. Freeman
 */

#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>
#define Print(...) {printf(__VA_ARGS__); \
					fflush(stdin); \
					fflush(stdout);}

typedef struct {
	int ID;
	char name[50];
	float height;
}S_data;

typedef struct S_student {
	S_data student;
	struct S_student* Pnextstudent;
}S_student;


void fill_the_record (S_student* new_student);
void Add_student();
int Delete_student();
void view_students();
void Delete_All();
void get_Nth();
int listlength();
void get_Nth_L();



#endif /* LIST_H_ */
