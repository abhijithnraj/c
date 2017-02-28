#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b,i,j,flag=0;
	clrscr();

	printf("Enter two range limits:\n");
	scanf("%d%d",&a,&b);

	for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
			if(flag==0)
			printf("%d%s",i,"\n");


		}
	}


	getch();

	}
