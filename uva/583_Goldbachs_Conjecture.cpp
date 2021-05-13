#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int mark[1000000];
vector<int>prime;

void sieve()
{
	for(int i=3; i<1000000; i+=2)
    {
		if( !mark[i])
		{
			prime.push_back(i);
			for(int j=3; i*j<1000000; j+=2)
				mark[i*j] = 1;
		}
	}
}
pair<int, int> sol(int n)
{
    int flag = 0;
    pair<int, int>p;

    for(int i=0; i<prime.size(); i++)
    {
        p.first = prime[i];
        p.second = n-prime[i];
        if( !mark[p.first] && !mark[p.second] )
            return p;
    }
    p.first = 0;
    p.second = 0;

    return p;

}
int main()
{
    //freopen("input.txt", "w", stdin);

    sieve();

    int n;
    while(cin>>n && n)
    {
        pair<int, int> p = sol(n);

        if(p.first)
            printf("%d = %d + %d\n", n, p.first, p.second);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}