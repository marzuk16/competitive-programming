#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,c,zero=0,one=0,szero=0,ezero=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<=1; i++)
    {
        if(s[i]=='0')
            szero++;
        if(szero==2)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=s.size()-2; i<=s.size()-1; i++)
    {
        if(s[i]=='0')
            ezero++;
        if(ezero==2)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    if(s.size()==1)
    {
        if(s[0]=='0')
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                zero++;
                if(zero==3)
                    break;
            }
            else
                zero=0;
            if(s[i]=='1')
            {
                one++;
                if(one>1)
                    break;
            }
            else
                one=0;
        }
        //cout<<"zero: "<<zero<<endl;
        //cout<<"one: "<<one<<endl;
        if(zero>2 || one>1)
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    }

    return 0;
}
