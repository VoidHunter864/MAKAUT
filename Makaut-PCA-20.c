//Write a program to print fibonacci series in a given range//

#include <stdio.h>

void main() 
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d %d ",a,b);
    for(i=2;i<=n;i++)
    {  
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}