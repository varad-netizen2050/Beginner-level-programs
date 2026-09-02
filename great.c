//Write a program to find greatest of four numbers entered by user
#include<stdio.h>
int main(){
    int a,b,c,d; //To read four number entered
    printf("Enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);//Receiving inputs of all numbers at once
    if(a>b&&a>c&&a>d){

        printf("The greatest of all is %d",a);    //Using if else and > operator to solve the problem
    }
    else if(b>a&&b>c&&b>d){

        printf("The greatest of all is %d",b);
    }
    else if(c>a&&c>b&&c>d){

        printf("The greatest of all is %d",d);
    }
    else{

        printf("The greatest of all is %d",d);
    }
    
    
    return 0;
}
