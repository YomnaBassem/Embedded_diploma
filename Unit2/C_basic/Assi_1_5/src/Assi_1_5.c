/*
 ============================================================================
 Name        : Assi_1_5.c
 Author      : Yomna Bassem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c is %d",x,(int) x);
}
