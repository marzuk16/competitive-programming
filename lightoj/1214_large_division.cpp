#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,b,j;
    string a;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>a>>b;
        if(a[0]=='-')j=1;
        else
        j=0;
        long long int d=0;
        for(int k=j ; k<a.size(); k++)
        {
            d=d*10+(a[k]-'0');
            d%=b;
        }
        if(d)cout<<"Case "<<i<<": not divisible"<<endl;
        else
        cout<<"Case "<<i<<": divisible"<<endl;
    }

    return 0;
}
