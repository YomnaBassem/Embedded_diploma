/*
 ============================================================================
 Name        : Assi_1_7.c
 Author      : Yomna Bassem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter the value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	b=b+a;
	a=b-a;
	b=b-a;
	printf("After swapping , the value of a is %f\n",a);
	printf("After swapping , the value of b is %f\n",b);
}
