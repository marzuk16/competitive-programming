#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while(test--)
    {
        int n,x;
        vector<int >vec;

        scanf("%d", &n);

        int tmp = n;
        while(tmp--)
        {
            scanf("%d", &x);
            vec.push_back(x);
        }

        sort(vec.begin(), vec.end());

        x = min(vec[n-1], vec[n-2]);
        if(vec[n-2] == 1)
            printf("%d\n", 0);
        else if(n <= x)
            printf("%d\n", n-2);
        else printf("%d\n", x-1);
    }

    return 0;
}
