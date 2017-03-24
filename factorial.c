#include<stdio.h>

void main()
{
    int n,i,fact=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        fact=fact*i;
        i=i-1;
    }
    printf("The factorial of %d is %d",n,fact);
}
