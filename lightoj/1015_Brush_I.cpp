#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,test,x;

    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>n;
        int sum=0;
        for(int j=1; j<=n; j++)
        {
            cin>>x;
            if(x>0)
                sum+=x;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
