#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	while(cin>>n && n)
    {
		priority_queue<int, vector<int>, std::greater<int> > pq;

		while(n--)
        {
			int x;
			scanf("%d", &x);
			pq.push(x);
		}

		int total = 0, cost = 0;

		while(pq.size() != 1)
        {
			total = pq.top(); pq.pop();
			total += pq.top(); pq.pop();

			cost += total;
			pq.push(total);
		}

		printf("%d\n", cost);
	}

	return 0;
}
