#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,x;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        vector<int>v;
        for(int j=0; j<3; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        if(v[0]*v[0]+v[1]*v[1] == v[2]*v[2])
            cout<<"Case "<<i<<": yes"<<endl;
        else
            cout<<"Case "<<i<<": no"<<endl;
    }

    return 0;
}