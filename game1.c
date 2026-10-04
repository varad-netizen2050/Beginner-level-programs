//Number Guesser #Fun
//Write a C program that uses a while loop and conditional statements to create an interactive number guessing game. The program will continuously prompt the user for input until they successfully guess a predefined secret number.
#include<stdio.h>
int main(){
    int secretNum=43; //The secret number is set to 43
    int guessNum=0;   //Guessed number and attempts are initialiazed to zero 
    int attempts=0;   //To prevent loop not start in certain scenario
   
    while (guessNum!=secretNum){   //Stopping condition of the loop is when the
                                   //secretNum==guessNum
        printf("Enter a number:\n");
        scanf("%d",&guessNum); //Reading guesses
        attempts++;  //Increasing count of attempts by 1 with each iteration
         if (guessNum==secretNum){           //Exit condition met 
            printf("Congratulations!!!\n"); //Appreciation for success
            printf("Your Number of attempts were %d",attempts);
                                           //No of iterations
            }
    // Conditions to hint the user how close or far is he from the actual number
    else if (guessNum>secretNum)  
        printf("TOO HIGH....Try Again\n"); 
    else
        printf("TOO LOW.....Try Again\n");
    }
   
    return 0;
}
