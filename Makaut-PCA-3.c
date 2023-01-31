//Write a c program to add 2 numbers entered by the user and display the result//

#include <stdio.h>
int main() 
{    
    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;      
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}