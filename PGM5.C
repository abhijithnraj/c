#include<conio.h>
#include<stdio.h>

void main()
{
	int sum=0,n,i;
	clrscr();
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d%s",sum," is the sum of first n natural nos");
	getch();
	}