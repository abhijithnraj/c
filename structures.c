#include<stdio.h>

typedef struct 
{
	char model[20];
	int year;
	char manufacturers[20];
	int dimensions[3];
}car;


void get_details(car *c)
{
	printf("Enter the model name\n");
	scanf("%s",&(c->model));
	printf("Enter the  year\n");
	scanf("%d",&(c->year));
	printf("Enter the manufacturers\n");
	scanf("%s",c->manufacturers);
	printf("Enter the dimensions l*b*h\n");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&(c->dimensions[i]));
	}
	
}

void display_details(car *c)
{
	printf("The model name:%s\n",c->model);
	printf("Year:%d\n",c->year);
	printf("Manufacturers:%s\n",c->manufacturers);
}
main()
{
	car c[5];
	int max=0,index;
	int i;
	for(i=0;i<5;i++)
	{
		get_details(c+i);
	}
	for(i=0;i<5;i++)
	{
		display_details(c+i);
	}
	
	for(i=0;i<5;i++)
	{
		int product=1;
		for(int j=0;j<3;j++)
		{
			product*=((c+i)->dimensions[j]);
		}
		if(product>max)
		{
			max=product;
			index=i;
		}
	
		
	}
	
	printf("The largest value is for\n");
	display_details(c+index);
	
}
