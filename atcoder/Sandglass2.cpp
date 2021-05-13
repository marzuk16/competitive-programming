#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int x,t,res;

    while(cin>>x>>t)
    {
        if( t >= x)
            res = 0;
        else
            res = x-t;

        cout<<res<<endl;
    }
    return 0;
}