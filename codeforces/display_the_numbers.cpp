#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int test,n;
    cin>>test;

    while(test--)
    {
        cin>>n;
        if(n%2)
        {
            n -= 3;
            cout<<7;
        }

        for(int i=1; i<=(n/2); i++)
            cout<<1;

        cout<<endl;
    }
    return 0;
}