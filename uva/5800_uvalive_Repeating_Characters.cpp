#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int test,p,r,s,m=0,n=0,c;
    cin>>test;
    for(int i=0; i<test; i++)
    {
        cin>>p>>r;
        string v;
        cin>>v;
       s=v.size();
        cout<<p<<" ";
        for(int k=0; k<v.size(); k++)
        {
            for(int l=0; l<r; l++)
            {
                cout<<v[k];
            }
        }
        cout<<endl;
    }

    return 0;
}