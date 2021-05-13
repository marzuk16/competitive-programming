#include<stdio.h>

int main ()
{
    int i,c,n,sum=0,p,start_interval,end_inerval;

    printf("press 1 for check, press 2 for interval: ");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        {
            printf("Enter your number: ");
            scanf("%d",&n);

            for(i=1;i<=n/2; i++)
            {
                if(n%i==0)
                sum+=i;

            }

            if(sum==n)
                {
                    printf("%d is a perfect number.\n",n);
                }
                else
                    printf("%d is not perfect number.\n",n);
        }
        break;

    case 2:
        {
            printf("Enter your interval: ");
            scanf("%d %d",&start_interval,&end_inerval);

            printf("\nPerfect numbers between [%d , %d] are: ",start_interval,end_inerval);
            for(i= start_interval; i<= end_inerval; i++)
                {
                    p=1;
                    while(p<=(i/2))
                    {
                        if(i % p == 0)
                        sum=sum+p;
                        p++;
                    }
                    if(sum==i)
                    printf(" %d ",i);
                    sum=0;
                }
                printf("\n\n");
        }
        break;

        default:
            break;
    }



    return 0;
}



