/*
 ============================================================================
 Name        : Assi_1_6.c
 Author      : Yomna Bassem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	scanf("%f",&b);
	printf("Enter the value of a:%f\nEnter the value of b:%f",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping , value of a: %f\nAfter swapping , value of b: %f",a,b);

}
