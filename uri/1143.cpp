#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<4; j++)
        {
            if(j==1)
                cout<<i<<" ";
            if(j==2)
                cout<<i*i<<" ";
            if(j==3)
                cout<<i*i*i;
        }
        cout<<endl;
    }


    return 0;
}
