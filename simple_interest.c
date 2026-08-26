//Write a program to calculate simple interest  for a set of values representing principal, no. of years and rate of interest
#include <stdio.h>
int main(){
    printf("Calculating Simple Interest\n\n");
    float p;
    float t;
    float r;
    printf("Enter principal amount\n");
    scanf("%f",&p);
    printf("Enter the time (in years)\n");
    scanf("%f",&t);
    printf("Enter the rate of interest\n");
    scanf("%f",&r);
    printf("Your simple interest is %.2f",(p*r*t)/100);
    return 0;
}
