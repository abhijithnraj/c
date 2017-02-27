
#include <conio.h>
#include<stdio.h>

void main()
{
 int n,i;
 clrscr();
 printf("Enter the positive integer\n");
 scanf("%d",&n);
 printf("The factors are \n");
 for(i=1;i<=n;i++)
 if(n%i==0)
 printf("%d%s",i,"\n");
 getch();
}


