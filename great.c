//Write a program to find greatest of four numbers entered by user
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d){

        printf("The greatest of all is %d",a);
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
