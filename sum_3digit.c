//Write a program that receives 3 digit numbers and calculate the sum of its digits
#include<stdio.h>
#include<stdlib.h> //To use absolute function 
int main() {
	int num,units,hundreds,tens,sum;     //Declarations or creation of variables of integer data type
	printf("Enter a 3 digit number:\n"); 
	scanf("%d",&num);                    //Input
	int temp=abs(num); //To handle negative numbers entered
	if(temp>=1000||temp<=99) {
		printf("Error:NOT a 3 digit number\n");    //Rejecting any number format other than 3 digits using a single if block
		return 1;
	}
	units=temp%10; //Modulo operator will provide remainder which will be our units digit
	hundreds=temp/100; //Division operator used to obtain hundreds digit as an integer 
	tens=(temp/10)-hundreds*10; //Some made up logic using arithmetic operators
	sum=units+tens+hundreds; //Final calculations
	printf("The sum of the digits of the entered number is %d\n",sum); //Final Output: Sum of digits
	return 0;
}
