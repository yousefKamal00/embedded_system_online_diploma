#include <stdio.h>
#include <stdlib.h>
#include "list.h"

S_student* gpFirstStudent = NULL ;

void fill_the_record (S_student* new_student){
	char temp[50];
	Print("\n Enter the ID :\n");
	gets(temp);
	new_student->student.ID = atoi(temp);

	Print("\n Enter the student name :\n");
	gets(new_student->student.name);

	Print("\n Enter the student height :\n");
	gets(temp);
	new_student->student.height = atof(temp);
}

void Add_student(){
	S_student* pLastStudent;
	S_student* pNewStudent;
	if(gpFirstStudent == NULL){
		pNewStudent = (S_student*)malloc(sizeof(S_student));
		gpFirstStudent = pNewStudent;
	}
	else{
		pLastStudent = gpFirstStudent;
		while(pLastStudent->Pnextstudent)
			pLastStudent = pLastStudent->Pnextstudent;
		pNewStudent = (S_student*)malloc(sizeof(S_student));
		pLastStudent->Pnextstudent = pNewStudent;
	}

	fill_the_record(pNewStudent);
	pNewStudent->Pnextstudent = NULL;
}

int Delete_student(){
	char temp[50];
	int entered_id;
	Print("\nEnter Student ID to be deleted:\n");
	gets(temp);
	entered_id = atoi(temp);
	if(gpFirstStudent){
		S_student* pPreviousStudent = NULL;
		S_student* pSelectedStudent = gpFirstStudent;
		while(pSelectedStudent){

			if(pSelectedStudent->student.ID == entered_id){
				if(pPreviousStudent)
					pPreviousStudent->Pnextstudent = pSelectedStudent->Pnextstudent;
				else
					gpFirstStudent = pSelectedStudent->Pnextstudent;
				free (pSelectedStudent);
				return 1;
			}

			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->Pnextstudent;
		}
		return 0;
	}

	Print("\nCouldn't find Student ID\n");
	return 0;
}

void view_students(){
	int count = 0;
	S_student* pCurrentStudent = gpFirstStudent;
	if(!pCurrentStudent){
		Print("\n the list is empty\n");
	}
	while(pCurrentStudent){
		Print("\n record number : %d",count+1);
		Print("\n ID : %d",pCurrentStudent->student.ID);
		Print("\n Name : %s",pCurrentStudent->student.name);
		Print("\n Height : %f",pCurrentStudent->student.height);
		pCurrentStudent = pCurrentStudent->Pnextstudent;
		count++;
	}
}

void Delete_All(){
	S_student* pCurrentStudent = gpFirstStudent;
	if(!pCurrentStudent){
		Print("\n the list is empty\n");
	}
	while(pCurrentStudent){
		S_student* temp = pCurrentStudent;
		pCurrentStudent = pCurrentStudent->Pnextstudent;
		free(temp);
	}
	gpFirstStudent = NULL;
}


void get_Nth(){
	int index,flag = 0 ;
	Print("Please Enter Your wanted index : ");
	scanf("%d",&index);
	int count = 0;
	S_student* pCurrentStudent = gpFirstStudent;
	if(!pCurrentStudent){
		Print("\n the list is empty\n");
	}
	while(pCurrentStudent){
		if(index == count){
			flag = 1 ;
			Print("\n student index : %d",count);
			Print("\n ID : %d",pCurrentStudent->student.ID);
			Print("\n Name : %s",pCurrentStudent->student.name);
			Print("\n Height : %f",pCurrentStudent->student.height);
		}
		pCurrentStudent = pCurrentStudent->Pnextstudent;
		count++;
	}
	if(!flag){
		Print("sorry your index wasn't found");
	}
}

int listlength(){
	int count = 0;
	S_student* pCurrentStudent = gpFirstStudent;
	if(!pCurrentStudent){
		return count;
	}
	while(pCurrentStudent){
		pCurrentStudent = pCurrentStudent->Pnextstudent;
		count++;
	}
	return count;
}

void get_Nth_L(){
	int index,flag = 0,len = listlength() ;
	Print("Please Enter Your wanted index : ");
	scanf("%d",&index);
	int count = 0;
	S_student* pCurrentStudent = gpFirstStudent;
	if(!pCurrentStudent){
		Print("\n the list is empty\n");
	}
	while(pCurrentStudent){
		if((len-(index+1)) == count){
			flag = 1 ;
			Print("\n student index : %d",count);
			Print("\n ID : %d",pCurrentStudent->student.ID);
			Print("\n Name : %s",pCurrentStudent->student.name);
			Print("\n Height : %f",pCurrentStudent->student.height);
		}
		pCurrentStudent = pCurrentStudent->Pnextstudent;
		count++;
	}
	if(!flag){
		Print("sorry your index wasn't found");
	}
}












