#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,f=1;
    cin>>n;
    for(i=n; i>0; i--)
    {
        f*=i;
    }

    cout<<f<<endl;


    return 0;
}
