/*
 ============================================================================
 Name        : Assi_2_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	char operator;
	printf("Enter an operator either + or - or * or divide :\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(operator)
	{
	case('+'):
			{
		printf("%f + %f = %f",x,y,x+y);
			}
	break;
	case('-'):
		{
		printf("%f - %f = %f",x,y,x-y);
		}
	break;
	case('*'):
			{
		printf("%f * %f = %f",x,y,x*y);
			}
	break;
	case('/'):
		{
		printf("%f / %f = %f",x,y,x/y);
		}
	break;
	}
}
