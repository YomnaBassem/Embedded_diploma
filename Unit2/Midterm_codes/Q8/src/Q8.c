
#include <stdio.h>
#include <stdlib.h>
int Reverse_elements(int a[],int size){
	for(int i=size-1; i>=0; i--){
		printf("%d ",a[i]);
	}
}
int main(void) {
	int size;
	printf("Enter the size of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	int a[size];
	printf("Enter the array elements: ");
	for(int i=0; i<size; i++){
		scanf("%d",&a[i]);
	}
	printf("The reversed array is : ");
	printf("%d ",Reverse_elements(a,size));
}
