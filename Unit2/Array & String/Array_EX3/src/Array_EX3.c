/*
 ============================================================================
 Name        : Array_EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r , c;
	printf("Enter rows and columns of the matrix : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);
	int a[r][c],t[r][c];
	printf("Enter elements of the matrix :\n");
	for(int i=1; i<r+1;i++){
		for(int j=1; j<c+1; j++){
			printf("Enter element a%d%d :",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i-1][j-1]);
			printf("\n");
		}
	}
	printf("The entered matrix :\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			t[i][j]=a[j][i];
		}
	}
	printf("Transpose of the matrix :\n");
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
