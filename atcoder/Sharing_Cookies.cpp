#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int x,y;
    while(cin>>x>>y)
    {
        if( !(x%3) || !(y%3) || !((x+y)%3) )
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }

    return 0;
}