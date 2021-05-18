#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,x,res=-1;

    cin>>n;

    while(n--)
    {
        cin>>x;

        res = max(res, x);
    }

    cout<<res<<endl;
}
