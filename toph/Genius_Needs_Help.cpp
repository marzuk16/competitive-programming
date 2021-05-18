#include<bits/stdc++.h>
using namespace std;

int fst(string& a)
{
    int n=a[a.size()-1]-'0';
    a.pop_back();
    return n;
}

int snd(string& b)
{
    int m=b[b.size()-1]-'0';
    b.pop_back();
    return m;
}

string sum(string& a, string& b)
{
    string c;
    int carry=0,x,t;

    if(a.size()>b.size())
    {
        x=a.size()-b.size();
        reverse(b.begin(), b.end());

        for(int i=1; i<=x; i++)
        {
            b.push_back('0');
        }
        reverse(b.begin(), b.end());
    }
    else if(b.size()>a.size())
    {
        x=b.size()-a.size();
        reverse(a.begin(), a.end());

        for(int i=1; i<=x; i++)
        {
            a.push_back('0');
        }
        reverse(a.begin(), a.end());
    }

    x=a.size();
    for(int i=1; i<=x; i++)
    {
        t=carry+fst(a)+snd(b);
        if(t>9)
            carry=1;
        else
            carry=0;
        c.push_back(t%10+'0');
    }

    if(carry)
        c.push_back(carry+'0');
    reverse(c.begin(), c.end());

    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);

    int test;
    cin>>test;

    for(int T=1; T<=test; T++)
    {
        string a,b,d;
        cin>>a>>b;

        d=sum(a, b);

        cout<<"Case #"<<T<<": ";
        for(int j=0; j<d.size(); j++)
        {
            cout<<d[j];
        }
        cout<<endl;
    }

    return 0;
}