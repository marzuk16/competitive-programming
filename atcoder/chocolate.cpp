#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,d,x,y,res=0,r;
    scanf("%d %d %d",&n,&d,&x);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&y);
        if(d%y)
            res+=(d/y)+1;
        else
            res+=(d/y);
    }
    printf("%d\n",res+x);
}