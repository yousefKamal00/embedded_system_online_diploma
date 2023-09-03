/*
 ============================================================================
 Name        : Linked_list.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void) {
	char tmp[50];
	while(1){
		Print("\n=====================================\n");
		Print("\n1: Add student ");
		Print("\n2: Delete student ");
		Print("\n3: View students ");
		Print("\n4: Show list length ");
		Print("\n5: Find a student using his index ");
		Print("\n6: Find a student using his index from the last ");
		Print("\n7: Delete All ");

		gets(tmp);

		switch(atoi(tmp)){

		case 1:
			Add_student();
			break;

		case 2:
			Delete_student();
			break;

		case 3:
			view_students();
			break;

		case 4:
			Print("\n list length is : %d",listlength());
			break;

		case 5:
			get_Nth();
			break;

		case 6:
			get_Nth_L();
			break;

		case 7:
			Delete_All();
			break;

		default:
			Print("\n Wrong option");
			break;
		}

	}
    return 0;
}








