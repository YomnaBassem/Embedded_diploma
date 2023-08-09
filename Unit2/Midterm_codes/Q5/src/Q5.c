/*
 ============================================================================
 Name        : Q5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count_ones(int num){
	int count=0;
	for(int i=0;i<sizeof(num)*8;i++){
		if(num&(1<<i)){
			count++;
		}
	}
	return count;
}
int main(void) {
	int x;
	printf("Enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("number of ones are: %d",count_ones(x));
}
