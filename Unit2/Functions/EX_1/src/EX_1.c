#include <stdio.h>
 int is_prime(int n);
int main() {
	int start,stop;
   printf("Enter two numbers: ");
   fflush(stdin); fflush(stdout);
   scanf("%d %d",&start,&stop);
    printf("The prime numbers between %d and %d are :",start,stop);
   for(int i=start+1;i<=stop;i++){
	   if(is_prime(i)){
		   printf("%d ",i);
	   }
   }
    return 0;
}
int is_prime(int n){
	if (n<=1){
		return 0;
	}
	for (int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
