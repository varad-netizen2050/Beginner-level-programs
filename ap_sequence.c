//Calculating the nth term of an arithmetic sequence
//an=a1+(n-1)*d
//With user inputs supplied by the user to other three parameters
#include<stdio.h>
int main() {
	float a1,d;
	int n;
	printf("Enter the first term:\n");
	scanf("%f",&a1);
	printf("Enter the no. of terms:\n");
	scanf("%d",&n);
	printf("Enter the difference between the two terms:\n");
	scanf("%f",&d);
	float an=a1+((n-1)*d);
	printf("The nth term in this particular sequence is:%.2f",an);
	return 0;
}
