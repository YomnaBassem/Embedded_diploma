/*
 ============================================================================
 Name        : String_EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[50],c;
	int freq=0;
	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
	scanf("%s",string);

	printf("Enter a character to find a frequency:");
	fflush(stdin); fflush(stdout);
	scanf(" %c",&c);

	for( int i=0; string[i]!='\0';i++){
		if(c==string[i]){
			++freq;
		}
	}
	printf("Frequency of %c = %d",c,freq);
}
