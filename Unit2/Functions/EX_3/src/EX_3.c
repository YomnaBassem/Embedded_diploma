/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Reverse(char a[], int length);
int main(void) {
	char a[100];
	printf("Enter a sentence :");
	fflush(stdin); fflush(stdout);
	gets(a);
	Reverse(a,strlen(a));
	return 0;
}
void Reverse(char a[], int length){
	if (length < 0) {
	        return;
	    }
	printf("%c",a[length]);
	length--;
	Reverse(a,length);
}
