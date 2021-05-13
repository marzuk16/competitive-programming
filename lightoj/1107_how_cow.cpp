#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,m,x,y,x1,x2,y1,y2,i,j;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        for(j=1; j<=m; j++)
        {
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }


    return 0;
}