#include <stdio.h>
struct Sdistance {
int feet;
float inches;
};
struct Sdistance Add(struct Sdistance distance1,struct Sdistance distance2)
{
   struct Sdistance result;
   result.feet=distance1.feet+distance2.feet;
   result.inches=distance1.inches+distance2.inches;
   if(result.inches>=12.0){
    result.feet+=(int)(result.inches/12.0);
    result.inches=fmod(result.inches,12.0);
   }
   return result;
}
int main(){
    struct Sdistance distance1 ,distance2,sum;
   printf("Enter information of the 1st ditsnace:\n");
   printf("Enter feet: ");
   scanf("%d",&distance1.feet);
   printf("Enter inches: ");
   scanf("%f",&distance1.inches);
   printf("Enter the information of 2nd distance:\n");
   printf("Enter feet: ");
   scanf("%d",&distance2.feet);
   printf("Enter inches: ");
   scanf("%f",&distance2.inches);
   sum=Add(distance1,distance2);
   printf(" sum of distance: %d'-%0.2f\"",sum.feet,sum.inches );
   
}
