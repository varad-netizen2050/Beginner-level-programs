//Write a program to calculate simple interest  for a set of values representing principal, no. of years and rate of interest
#include <stdio.h>
int main(){
    printf("Calculating Simple Interest\n\n"); //Heading or Title
    float p,r,t;                              // Declaring three variables for principle,rate of interest, time period respectively at once
   
    printf("Enter principal amount\n");
    scanf("%f",&p);                           //Gathering inputs for all the variables with the message prompting to do so
    printf("Enter the time (in years)\n");
    scanf("%f",&t);
    printf("Enter the rate of interest\n");
    scanf("%f",&r); 
    printf("Your simple interest is %.2f",(p*r*t)/100); // Using simple interest's formula and *operator to display the resulting output
    return 0;
}
