#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,test,x1,x2,y1,y2,z1,z2,result,x1l,y1l,z1l,x2l,y2l,z2l;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>n;
        int xlow=0,xhigh=1001,ylow=0,yhigh=1001,zlow=0,zhigh=1001;
        for(int j=1; j<=n; j++)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;

            xlow=max(xlow,x1);
            ylow=max(ylow,y1);
            zlow=max(zlow,z1);

            xhigh=min(xhigh,x2);
            yhigh=min(yhigh,y2);
            zhigh=min(zhigh,z2);
        }

        result = (xhigh-xlow)*(yhigh-ylow)*(zhigh-zlow);
        if(result < 0)
            cout<<"Case "<<i<<": 0"<<endl;
        else
            cout<<"Case "<<i<<": "<<result<<endl;
    }

    return 0;
}
