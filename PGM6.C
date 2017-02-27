#include<conio.h>
#include<stdio.h>

void main()
{
	int a=0,b=0,i,j;
	clrscr();
	printf("Enter the range first smaller then larger");
	scanf("%d%d",a,b);
	for(i=a;i<=b;i++)
	{
		for(j=0;j<=10;j++)
		{
			printf("%d%s%d%s%d%s",j," * ",i," = ",j*i,"\n");
		}

		printf("\n\n\n");
	}
	getch();
}