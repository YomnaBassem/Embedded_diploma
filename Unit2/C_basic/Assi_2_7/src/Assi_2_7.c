/*
 ============================================================================
 Name        : Assi_2_7.c
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
	int y;
	printf("Enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	if (y<0){
		printf("Error!!,the factorial of negative numbers doesn't exist");
	}
	else if (y==0){
		printf("The factroial of zero is 1");
	}
	else {
		printf("The factroial of %d is %d",y,factorial(y));
	}
}
int factorial(int x){
	if (x==1 || x==0) return 1;
	else return x*factorial(x-1);
}
