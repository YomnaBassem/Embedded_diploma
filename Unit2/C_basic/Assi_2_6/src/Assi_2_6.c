/*
 ============================================================================
 Name        : Assi_2_6.c
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
	int x,sum=0;
	printf("Enter an integer:");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);
		for(int i=0;i<=x;i++){
			sum+=i;
		}
		printf("sum=%d",sum);
}
