#include<bits/stdc++.h>
using namespace std;

int sol(int n, string s)
{
    int ind = s.size()-1, sum = 0;

    for(int i=0; i<n; i++) sum += s[i]-'0';

    for(int i = ind; i>=0; i--)
    {
        int x = s[i]-'0';
        if( (x%2) && !(sum%2) )
            return i;

        sum -= x;
    }

    ind = -1;
    return ind;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int test,n;
    string s;

    cin>>test;
    while (test--)
    {
        cin>>n>>s;
    
        int res = sol(n, s);

        if(res == -1)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<=res; i++)
                cout<<s[i];
            cout<<endl;
        }
        
    }
    
    return 0;
}