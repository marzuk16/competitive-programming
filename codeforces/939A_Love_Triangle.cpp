#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int n;
    scanf("%d", &n);
    int arr[n+5];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int res = 0;
    for(int i=1; i<=n; i++)
    {
        int a = i;
        int b = arr[i];
        int c = arr[b];

        if(a == arr[c])
        {
            res = 1;
            break;
        }
    }

    if(res)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}