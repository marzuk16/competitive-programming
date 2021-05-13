#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m,mx=0;

    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>m;
            if(mx<m)
                mx=m;
        }
        if(mx<10)
            cout<<"1"<<endl;
        else if(mx<20)
            cout<<"2"<<endl;
        else cout<<"3"<<endl;

        mx=0;
    }


    return 0;
}
