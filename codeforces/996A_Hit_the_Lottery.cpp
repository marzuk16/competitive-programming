#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int sum=0,s=0;
    cin>>n;

    if(n>=100)
    {
        s=n/100;
        n=n-(s*100);
        sum=s;
    }
    if(n>=20)
    {
        s=n/20;
        n=n-(s*20);
        sum+=s;
    }
    if(n>=10)
    {
        s=n/10;
        n=n-(s*10);
        sum+=s;
    }
    if(n>=5)
    {
        s=n/5;
        n=n-(s*5);
        sum+=s;
    }
    if(n>=1)
    {
        s=n;
        sum+=s;

    }

    cout<<sum<<endl;

    return 0;
}
