#include<bits/stdc++.h>
using namespace std;

#define MOD 10000007
long long int a,b,c,d,e,f,n;

int fn( int n )
{
	int x[10001];

	for (int i=0; i<=n; i++)
    {

    	if(i>=0 && i<=5)
        {
            if( i==0 )
            {
                x[i] = a;
            }
            if( i==1 )
            {
                x[i] = b;
            }
            if( i==2 )
            {
                x[i] = c;
            }
            if( i==3 )
            {
                x[i] = d;
            }
            if( i==4 )
            {
                x[i] = e;
            }
            if( i==5 )
            {
                x[i] = f;
            }
        }
        else
            x[i] = ( ( ( ( ( ( x[i-1] % MOD + x[i-2] % MOD ) % MOD + x[i-3] % MOD ) % MOD + x[i-4] % MOD ) % MOD + x[i-5] % MOD ) % MOD )+ x[i-6]%MOD )% MOD;

	}

	return x[n];
}

int main()
{
	long long int ans,test;

	cin >> test;

	for (long long int i=1; i<=test; i++)
    {
		cin >>a>>b>>c>>d>>e>>f>>n;

		ans = fn(n);
		ans = ans%10000007;

		cout << "Case "<< i <<": "<< ans << endl;
	}

	return 0;
}