#include<stdio.h>

int main ()
{
    int t,i,j,a,b,sum;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            sum=0;
            printf("%d\n",sum);
        }

        else
        {
            if(a<b)
            {
                for(j=a+1,sum=0;j<b;j++)
            {
                if(j%2==1)
                    sum+=j;
            }
            printf("%d\n",sum);
            }

            else
                for(j=b+1,sum=0; j<a; j++)
                {
                    if(j%2==1)
                    sum+=j;
                }
                printf("%d\n",sum);
        }
    }

    return 0;
}
