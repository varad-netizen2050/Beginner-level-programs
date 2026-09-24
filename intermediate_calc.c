//Developing an intermediate calculator using switch case control structure
#include<stdio.h>
#include<stdlib.h>
int main() {
	char operation;  //Using character data type
	float num1,num2; //Declaring two floating point or decimal type variables or operands with the values entered later on
	printf("Enter operation to perform (+,-,*,/,%):\n");
	scanf("%c",&operation); //Reading character of operation to perform on two numbers first
	printf("Enter two numbers:\n");
	scanf("%f %f",&num1,&num2); //Reading two floating point numbers at once with a single input command
	switch(operation) { //Using switch case control
	case '+':
		printf("Addition of two numbers %.2f and %.2f is: %.2f\n",num1,num2,num1+num2);
		break; //Break: To exit from switch case structure once the particular case's commands are executed
	case '-':
		printf("Subtraction of two numbers %.2f and %.2f is: %.2f\n",num1,num2,num1-num2);
		break;
	case '*':
		printf("Multiplication of two numbers %.2f and %.2f is: %.2f\n",num1,num2,num1*num2);
		break;
	case '/':
		if (num2==0) {
			printf("Division by zero is not defined\n");  //First checking if the num2 is zero as division by zero is not defined
			return 1;   //Error code 1 to show something is not right here
		}
		else
			printf("Division of two numbers %.2f and %.2f is %.2f\n",num1,num2,num1/num2);
		break;
	case '%':
		if (num2==0) {
			printf("Division by zero is not defined\n");  //First checking again if the num2 is zero as division by zero is not defined
			return 1;  //Error code 1 to show something is not right here
		}
		else
			printf("Remainder obtained when %.2f is divided by %.2f is %d\n",num1,num2,(int)num1%(int)num2);
		//Modulo or remainder operator can only be used on integers so i typecasted them into integers while performing the operation and so changed the format specifier from %f -->%d
		break;
	default:
		printf("Error....Invalid Operation\n"); //Such Message appears when user enters an unspecified operation to work on
		break;
	}
	return 0;
}
