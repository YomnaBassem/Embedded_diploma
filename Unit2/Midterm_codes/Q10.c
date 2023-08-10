#include <stdio.h>
#include <stdlib.h>
int max_ones(int num){
    int max_count=0, found_zero=0, current_count=0;
    while(num>0){
        if(num&1){
            if(found_zero){
                current_count++;
                if(current_count>max_count){
                    max_count=current_count;
                }
            }

        }
        else{
            found_zero=1;
            current_count=0;
        }
        num>>=1;
    }
    return max_count;
}
int main(void){
int num;
printf("Enter any number:");
scanf("%d",&num);
printf("Max number of ones is: %d",max_ones(num));
}