#include<stdio.h>

int main ()
{
    double i,number,sum=0;
    int count=0;

    for(i=1; i<=6; i++)
    {
        scanf("%lf",&number);
        if(number>0)
        {
            count++;
            sum+=number;

        }
    }

    printf("%d valores positivos\n",count);
    printf("%.1lf\n",(sum/count));

    return 0;
}
