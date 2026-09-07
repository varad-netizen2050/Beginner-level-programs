#include<stdio.h>
int main(){
    printf("Elevator Button Panel\n\n\n\n");
    printf("Available floors:\nCase 1--> First Floor\nCase 2--> Second Floor\nCase 3--> Third Floor\nCase 4--> Fourth Floor\nDefault--> Invalid Floor\n\n\n");
    int floor;
    printf("Enter floor number: \n");
    scanf("%d",&floor);
    switch(floor){
        case 1:
        printf("You selected first floor\n");
        break;
        case 2:
        printf("You selected second floor\n");
        break;
        case 3:
        printf("You selected third floor\n");
        break;
        case 4:
        printf("You selected fourth floor\n");
        break;
        default:
        printf("Invalid floor\n");
        break;
        
    }
    
    
    return 0;
}
