//Write a c program to take a variable int and input the value from the user and display it//

#include <stdio.h>
int main()
{ 
    int number;
    printf("Enter an integer: ");  
    scanf("%d", &number);
    printf("You entered: %d", number);
    return 0;
}