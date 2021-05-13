#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x,n,s=0,i;

    cin>>x>>n;
    while(n<=0)
    {
        cin>>n;
    }

    for(i=0; i<n; i++)
    {
        s+=x;
        x++;
    }
    cout<<s<<endl;

    return 0;
}
