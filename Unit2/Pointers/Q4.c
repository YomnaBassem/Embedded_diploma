#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int arr[50] , n;
    int *p=arr;
    printf("Write the number of elemnts to store in the array :");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
         printf("Element-%d: ",i);
         scanf("%d",p);
         p++;
    }
    p--;
    printf("The elements of array in reverse order :\n");
    for(int i=n ; i>0 ; i--){
        printf("Element-%d: %d\n",i,*p);
        p--;
    }
}