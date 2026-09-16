#include<stdio.h>
int main() {
	float distance,speed;
	float time_min,time_hours;
	printf("Enter the distance between City A and City B in km:\n");
	scanf("%f",&distance);
	// Reading the distances and speeds and authenticating them right after they are read by the program using two separate if- blocks
	if (distance<=0) {
		printf("Invalid distance, enter a distance greater than zero\n");
		return 2; //Error Code 2: Bad distance
	}
		printf("Enter the speed of travelling in km/hr:\n");
		scanf("%f",&speed);
		if(speed<=0) {
			printf("Invalid speed, enter a speed greater than zero\n");
			return 1; //Error Code 1: Bad Speed
		}

		time_hours=distance/speed;  
		time_min=time_hours*60;    // Using the relevant formulas and conversion of units
		float speed_min=speed/60;
		printf("The speed in km/min will be: %.2f km/min\n",speed_min);
		printf("The total time required to travel from City A and City B is: %.2f hours\n",time_hours);    //The final results displayed
		printf("The total time required to travel from City A and City B is: %.2f minutes\n",time_min);
		return 0;
	}
