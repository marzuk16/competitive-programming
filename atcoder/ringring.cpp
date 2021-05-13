#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int a,b,c,res;

    while(cin>>a>>b>>c)
    {
        res = max(a,max(b,c));
        res -= a+b+c;

        cout<<abs(res)<<endl;
    }
    return 0;
}