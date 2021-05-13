#include <stdio.h>

int main()
{
    int x=0,i,n,e,d=0;

    for(i=1;i<=100;i++)
    {
        scanf("%d", &n);
        x++;
        if(n>d)
        {
            e=x;
            d=n;
        }
    }
    printf("%d\n",d);
    printf("%d\n",e);


    return 0;
}
