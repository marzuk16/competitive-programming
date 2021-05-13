#include<stdio.h>

int main ()
{
    int n[100],i,j;
    memset(n,-1,sizeof(n));

    for(i=2; i<100; i++)
    {
        if(n[i]==-1)
        {
            for(i=2; i*j<100; i++)
            {
                n[i*j]=0;
            }
        }
    }

    for(i=2; i<100; i++)
    {
        if(n[i]!=0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
