#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    lld n,m,s,x;

    scanf("%lld", &n);
    vector< lld> a;

    for(int i=1; i<=n; i++)
    {
        scanf("%lld" , &x);
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    for(int i=1; i<=n; i++)
    {
        a[i] += a[i-1];
    }
//    cerr<<"..........."<<endl;
//    for(int i=0; i<n; i++)
//        cerr<<a[i]<<" ";

    scanf("%lld", &m);
    vector<lld >b;

    for(int i=0; i<m; i++)
    {
        scanf("%lld", &x);
        b.push_back(x);
    }


    reverse(a.begin(), a.end() );

    for(int i=0; i<b.size(); i++)
    {
        s = a[ b[i] - 1] - a[ b[i+1] -1 ];
//        cerr<<"b[i]: "<<a[ b[i] ]<<" b[i+1]: "<<a[ b[i+1] ]<<" S: "<<s<<endl;
        printf("%lld\n", a[0] - s );
    }

    return 0;
}
