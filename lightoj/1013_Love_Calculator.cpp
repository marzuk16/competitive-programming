#include<bits/stdc++.h>

#define lld long long int

using namespace std;

string s1,s2;
int dp[65][65];
lld dp1[65][65][65];

int length(int a, int b)
{
    int c=0,l=0,r=0;
    if(dp[a][b] != -1)
    {
        return dp[a][b];
    }
    if( a >= s1.size() )
        return s2.size() - b;
    if( b >= s2.size())
        return s1.size() - a;

    if(s1[a] == s2[b])
        c += length(a+1, b+1)+1;
    else
    {
        l += length(a+1, b)+1;
        r += length(a, b+1)+1;
    }

    return dp[a][b] = c + min(l,r);
}

 lld way(int len, int a, int b)
{
    if(len==0 && (a >= s1.size() && b >= s2.size()))
        return 1;
    if(0 >= len)
        return 0;

    if(dp1[len][a][b] != -1)
        return dp1[len][a][b];
    lld c=0,l=0,r=0;

    if(s1[a] == s2[b])
        c += way(len-1, a+1, b+1);
    else
    {
        l += way(len-1, a+1, b);
        r += way(len-1, a, b+1);
    }

    return dp1[len][a][b] = c+l+r;
}

int main()
{
    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        cin>>s1>>s2;

        memset(dp, -1, sizeof(dp));
        int r = length(0,0);
        memset(dp1, -1, sizeof(dp1));
        lld w = way(r,0,0);

        printf("Case %d: %d %lld\n", T, r, w);
    }

//    cout<<"......................"<<endl;
//    for(int i=0; i<3; i++)
//    {
//        for(int j=0; j<4; j++)
//        {
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    return 0;
}
