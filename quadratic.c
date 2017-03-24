#include<stdio.h>
#include<math.h>

void main()
{
	double det,real,imaginary,a,b,c,x1,x2;

	printf("\nEnter the values of coefficiets a,b and c\n");

	scanf("%lf %lf %lf",&a,&b,&c);

	det=b*b-4*a*c;

	if(det>0)
	{
		x1=(-1*b+sqrt(det))/(2*a);

		x2=(-1*b-sqrt(det))/(2*a);

		printf("\nThe two real roots are %lf and %lf",x1,x2);
	}

	else if(det==0)
	{
		x1=-b/(2*a);
		printf("\nThe only root is %lf ",x1);
	}

	else
	{
		real=-1*b/(2*a);
		imaginary=(sqrt(-det))/(2*a);

		printf("\nThe imaginary roots are %lf+%lfi and %lf-%lfi",real,imaginary,real,imaginary);
	}

}
