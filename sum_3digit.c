//Write a program that receives 3 digit numbers and calculate the sum of its digits
#include<stdio.h>
#include<stdlib.h>
int main() {
	int num,units,hundreds,tens,sum;
	printf("Enter a 3 digit number:\n");
	scanf("%d",&num);
	int temp=abs(num);
	if(temp>=1000||temp<=99) {
		printf("Error:NOT a 3 digit number\n");
		return 1;
	}
	units=temp%10;
	hundreds=temp/100;
	tens=(temp/10)-hundreds*10;
	sum=units+tens+hundreds;
	printf("The sum of the digits of the entered number is %d\n",sum);
	return 0;
}
