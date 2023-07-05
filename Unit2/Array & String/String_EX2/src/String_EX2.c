/*
 ============================================================================
 Name        : String_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[50];
	int counter=0;

	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",text);

	for(int i=0; text[i]!='\0'; i++){
		counter++;
	}
	printf("Length of string : %d",counter);
}
