#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);

    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int extra = n%k;
        int res = n-extra;
        res += min(extra, k/2);

        cout<<res<<endl;
    }

    return 0;
}