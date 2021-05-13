#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);

    int test,n,p,q,x;
    cin>>test;

    for(int T=1; T<=test; T++)
    {
        cin>>n>>p>>q;
        int cnt = 0, sum = 0;
        while(n--)
        {
            cin>>x;
            sum += x;
            if(cnt < p && sum <= q)
                cnt++;

        }

        cout<<"Case "<<T<<": "<<cnt<<endl;
    }
}
