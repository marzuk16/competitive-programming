#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,n,i,j,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        for(j=1; j<a; j++)
        {
            if(a%j==0)
            {
                sum+=j;
            }
        }
        if(sum==a)
        {
            cout<<a<<" eh perfeito"<<endl;
        }
        else
            cout<<a<<" nao eh perfeito"<<endl;
        sum=0;
    }

    return 0;
}
