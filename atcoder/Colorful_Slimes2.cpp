#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{
    int n,x,cnt=0;
    vector<int>v;
    scanf("%d",&n);
    for(int i=0;i<n; i++)
    {
        scanf("%d",&x);
        v.push_back(x);

        if(v.size()>0 && v[i-1]==x)
        {
            cnt++;
            v[i]=0;
        }
    }

    printf("%d\n",cnt);
    return 0;
}