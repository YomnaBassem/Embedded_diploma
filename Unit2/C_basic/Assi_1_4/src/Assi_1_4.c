/*
 ============================================================================
 Name        : Assi_1_4.c
 Author      : Yomna Bassem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,product;
	printf("Enter two numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	product=x*y;
	printf("The product=%f",product);
}
