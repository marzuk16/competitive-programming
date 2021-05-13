#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);

    int test,n,x;
    string s;
    cin>>test;

    for(int T=1; T<=test; T++)
    {
    int sum = 0;
        cout<<"Case "<<T<<":"<<endl;
        cin>>n;
        while(n--)
        {
            cin>>s;
            if(s[0] == 'd')
            {
                cin>>x;
                sum += x;
            }
            else
                cout<<sum<<endl;
        }
    }
}
