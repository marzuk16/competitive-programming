#include<bits/stdc++.h>
using namespace std;

//int odd()

int main()
{
    int n,x,m=0,mm=0,r;
    vector<int>v;

    cin>>n;
    for(int i=1; i<=n/2; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    //if(v[0]%2!=0)
    //{
        r=1;
        for(int i=0; i<n/2; i++)
        {
            //cout<<"I: "<<i<<" ";

            m+=abs((n-r)-(v[n/2-(i+1)]));
            r+=2;
            //cout<<"M: "<<m<<" ";
            //cout<<"II: "<<i<<" ";
        }
    //}
    //else
    //{
        r=0;
        for(int i=0; i<n/2; i++)
        {
            mm+=abs((n-r)-(v[n/2-(i+1)]));
            r+=2;
        }
    //}
    cout<<min(m,mm)<<endl;;

    return 0;
}
