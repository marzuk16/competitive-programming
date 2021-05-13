#include<stdio.h>

int main ()
{
    int n,y,m,d,a;

    scanf("%d",&n);

    y=n/365;
    a=n%365;
    m=a/30;
    d=a%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}

