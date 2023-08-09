
#include <stdio.h>
#include <stdlib.h>
int unique_num(int a[], int size) {
    for (int i = 0; i < size; i++) {
        int is_unique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && a[i] == a[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            return a[i];
        }
    }
    return -1; // No unique number found
}

int main(void) {
	int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
	printf("The unique number is: %d",unique_num(a,size));
}

