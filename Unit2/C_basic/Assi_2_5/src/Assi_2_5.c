/*
 ============================================================================
 Name        : Assi_2_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char x;
	printf("Enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if ((x>'A') && (x<'Z')){
		printf("%c is a character",x);
	}
	else{
		printf("%c is not a character",x);
	}
}
