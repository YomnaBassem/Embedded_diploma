/*
 ============================================================================
 Name        : EX_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
 int factorial(int x);
int main(void) {
	int x;
	printf("Enter a postivie integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("factorial of %d is : %d ",x,factorial(x));
}
int factorial(int x){
	if (x<=1){
		return 1;
	}
	else {
		return x*factorial(x-1);
	}
}
