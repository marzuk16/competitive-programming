#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n && n)
    {
        queue<int> q;

        for(int i=1; i<=n; i++)
            q.push(i);

        printf("Discarded cards:");
        while(q.size() != 1)
        {
            int x = q.front(); q.pop();
            int tmp = q.front(); q.pop();

            q.push(tmp);

            if(q.size() == 1)
                printf(" %d", x);
            else
                printf(" %d,", x);

        }

        printf("\n");
        printf("Remaining card: %d\n", q.front());
    }

    return 0;
}