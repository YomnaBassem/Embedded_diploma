/*
 ============================================================================
 Name        : Array_EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ,a[10], x ;
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	for(int i=0; i<n;i++){
		if (a[i]==x){
			printf("Number found at location: %d",i+1);
		}
	}
}
