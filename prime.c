#include<stdio.h>

void main()
{
        int a,b,i,j;
        int p=1;

        printf("Enter the two limits smaller and then larger (a and b ,where a<b)");
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {cd
            for (j=2;j<i;j++)
            {
                if(i%j==0)
                {
                p=0;
                printf("%d%d",i,j);
                }
            }

            if(p==0)
            printf("\n%d\n",i);
        }
}
