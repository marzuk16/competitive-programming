#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
	scanf("%d %d %d", &n, &a, &b);
	int arr[n+1];
	arr[0] = 0;
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] += arr[i-1];
	}
	printf("%d\n", arr[b+1] - arr[a]);
	
	return 0;
}