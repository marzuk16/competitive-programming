#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int res[505][505];

int gcd(int a, int b)
{
    if(!b)
        return a;
    return gcd(b, a%b);
}

int main()
{
    //freopen("input.txt", "w", stdin);

    int n,x;
    while(cin>> n && n)
    {
        int g = 0;
//        vector<int>v;
//        for(int i=1; i<=n; i++)
//        {
//            scanf("%d", x);
//            v.push_back(x);
//        }
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if( !res[i][j])
                {
                    res[i][j] = gcd(i, j);
                }
                g += res[i][j];
            }
        }

        printf("%d\n", g);
    }
    return 0;
}