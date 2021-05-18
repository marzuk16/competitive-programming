#include <bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

bool isFaire(lld n)
{
	lld tmp = n;
	while (n)
	{
		if ((n % 10) && (tmp % (n % 10)))
			return false;
		n /= 10;
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//FI;
	//FO;
	int test;
	cin >> test;

	lld n;

	for (int T = 1; T <= test; T++)
	{
		cin >> n;
		while (!isFaire(n))
			n++;

		cout << n << endl;
	}

	return 0;
}
