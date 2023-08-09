/*
 ============================================================================
 Name        : Q7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calc_sum(int x){
	int first_num=1, last_num=x;
	int sum=(x/2)*(first_num+last_num);
	return sum;
}
int main(void) {
	int result=calc_sum(100);
	printf("%d",result);
}
