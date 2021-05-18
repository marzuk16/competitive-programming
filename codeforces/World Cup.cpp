#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,j,r;
    cin>>n>>a>>b;
    vector<int>v;
    for(i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    for(i=1;i<=n;i++)
    {
        int chk=0;
        vector<bool>chker(v.size()+1,1);
        for(int k=0;k<v.size();k+=2)
        {
            int a1,b1;
            a1=v[k];
            b1=v[k+1];
            cout<<"k="<<k<<"a1="<<a1<<" a="<<a<<" b1="<<b1<<" b="<<b<<endl;
            if(a1==a&&b1==b)
            {
                r=i;
                chk=1;
                break;

            }
            else if(a1==a)
            {
                chker[k+1]=0;
            }
            else
            {
                chker[k]=0;
            }

        }
        if(chk)
        {
            break;
        }
        cout<<"after r="<<i<<endl;
        vector<int>tmp;
        for(j=0;j<v.size();j++)
        {
            if(chker[j]==1)
                tmp.push_back(v[j]);
                cout<<v[j]<<" ";
        }
        while(v.size()!=0)
        {
            v.erase(v.begin()+0);
        }
        cout<<"v size="<<v.size()<<endl;
        for(j=0;j<tmp.size();j++)
        {
            v.push_back(tmp[j]);
        }
        cout<<endl;
    }
    if(log2 (n)==r)
    {
        cout<<"final"<<endl;
    }
    else cout<<r<<endl;

}
