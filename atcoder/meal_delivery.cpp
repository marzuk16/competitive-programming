#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int x,a,b;

    while(cin>>x>>a>>b)
    {
        if(abs(x-a) > abs(x-b))
            cout<<"B"<<endl;
        else
            cout<<"A"<<endl;
    }
    return 0;
}