//Write a program to that receives an integer representing seconds and then convert it to the format of x Hours:y mins:z seconds
#include<stdio.h>
#include<stdlib.h>
int main() {
	int total_sec;
	int hours,mins,remaining_seconds;
	printf("Enter total seconds (that you want to convert):\n");
	scanf("%d",&total_sec);
	hours=total_sec/3600;
	mins=(total_sec-hours*3600)/60;
	remaining_seconds=(total_sec-hours*3600)%60;
	printf("The time is :%d hrs, %d mins and %d seconds",hours,mins,remaining_seconds);
	return 0;
}
