#include<bits/stdc++.h>
using namespace std;

int dp[1000005];

int sol(int n)
{
    int res1 = 100, res2 = 100, res3 = 100;

    if(n == 1) return 0;
    if(dp[n]) return dp[n];
    if(n%2)
    {
        res1 = sol(n+1)+1;
        res2 = sol(n-1)+1;
    }
    else
        res3 = sol(n/2)+1;

    return dp[n] = min(res1, min(res2, res3));
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int test,n;
    cin>>test;

    while (test--)
    {
        //memset(dp, -1, sizeof(dp));

        cin>>n;
        cout<<sol(n)<<endl;
    }
    
    return 0;
}