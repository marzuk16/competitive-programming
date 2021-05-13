#include <stdio.h>
int main()
{
    double i,number,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&number);
        if(number>0)
            count++;
    }
    printf("%.0lf valores positivos\n",count);
    return 0;
}
