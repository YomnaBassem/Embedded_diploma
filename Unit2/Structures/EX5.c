#include <stdio.h>
#define PI 3.14159
#define Circle_Area(radius) PI*(radius)*(radius)
int main(){
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    printf("Area=%0.2f",Circle_Area(r));
}