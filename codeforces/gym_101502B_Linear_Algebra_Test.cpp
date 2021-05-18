#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
	int test, n, m, x, y, ans;
    lld r[100005], c[100005];

	scanf("%d", &test);
	while (test--)
	{
		scanf("%d", &n);
		map<int, int>m;
		lld sum = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d %d", &r[i],&c[i]);
			m[r[i]]++;
		}

		for (int i = 1; i <= n; i++)
            sum += m[c[i]];


		printf("%lld\n", sum);

	}

	return 0;
}