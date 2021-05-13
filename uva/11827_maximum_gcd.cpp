#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

vector<int>v;

int gcd(int a, int b)
{
    if(!b) return a;
    return gcd(b, a%b);
}

int main()
{
    //freopen("input.txt", "w", stdin);

    int test,x;
    int a[105];
    scanf("%d", &test);

    string s;
    getline(cin,s);

    for(int T=1; T<=test; T++)
    {
        int g = 0;

        getline(cin,s);
		istringstream is(s);
		int n = 0;

		while(is>>a[n]) ++n;

        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                g = max( g, gcd(a[i], a[j]) );

        printf("%d\n", g);
    }
    return 0;
}