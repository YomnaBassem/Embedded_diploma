/*
 ============================================================================
 Name        : Q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int SumDigits(char x[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
			sum+=x[i]-'0';
		}
	return sum;
}
int main(void) {
	char x[100];
	printf("write a number:");
	fflush(stdin); fflush(stdout);
	gets(x);
	printf("the sum of all digits= %d",SumDigits(x,strlen(x)));
}
