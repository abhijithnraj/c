#include<stdio.h>

void main()
{
    int n,no,big,i=0,sum=0;

    printf("Enter how many nos You want to enter:\n");
    scanf("%d",&no);
    printf("Start entering the nos now:\n");
    for(i=0;i<no;i++)
    {   printf("Enter the %d element:\n",i+1);
        scanf("%d",&n);
        sum=sum+n;
    }

    printf("The sum of the %d nos entered is %d",no,sum);

}
