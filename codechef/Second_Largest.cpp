#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,x;

    scanf("%d", &test);

    while(test--)
    {
        vector<int> v;
        for(int i=1; i<=3; i++)
        {
            scanf("%d", &x);
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        printf("%d\n", v[1]);
    }

    return 0;
}