#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    double R,r;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        cin>>R>>n;

        r=(R*sin(3.14159265/n))/(1+sin(3.14159265/n));//sin((180/n)*(3.14159/180))

        cout<<fixed<<setprecision(10)<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}

