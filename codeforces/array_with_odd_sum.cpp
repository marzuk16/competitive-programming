#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test,n,x;
    cin>>test;

    while(test--)
    {
        int odd = 0, even = 0;
        cin>>n;

        while(n--)
        {
            cin>>x;

            if(x%2) odd++;
            else even ++;
        }

        if(odd%2)
            cout<<"YES"<<endl;
        else
        {
            if(even && odd)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            
        }
        
    }

    return 0;
}