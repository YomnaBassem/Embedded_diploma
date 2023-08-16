#include <stdio.h>
struct Scomplex{
    float R;
    float I;
};
struct Scomplex Add(struct Scomplex value1, struct Scomplex value2)
{
   struct Scomplex result;
   result.R=value1.R+value2.R;
   result.I=value1.I+value2.I;
   return result;
}
int main(){
    struct Scomplex value1,value2,sum;
    printf("For the 1st complex number:\n");
    printf("Enter the real and imaginary respectively:");
    scanf("%f %f", &value1.R, &value1.I);
    printf("For the 2nd complex number:\n");
    printf("Enter the real and imaginary respectively:");
    scanf("%f %f", &value2.R, &value2.I);
    sum=Add(value1,value2);
    printf("sum=%0.1f+%0.1fi\n",sum.R,sum.I);

}
