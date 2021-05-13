#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a,b,gcf;

    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>a>>b;
        for(int j=1; j<=min(a,b); j++)
        {
            if(a%j==0 && b%j==0)
            gcf=j;
        }
        int lcm=(a*b)/gcf;
        cout<<i<<" "<<lcm<<" "<<gcf<<endl;
    }


    return 0;
}