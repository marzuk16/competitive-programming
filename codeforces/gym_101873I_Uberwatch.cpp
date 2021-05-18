#include<bits/stdc++.h>
using namespace std;

vector<int>enemy;
int memory[300005];

int sol(int n, int m, int i)
{
    int sum1 = 0, sum2 = 0;
    if(i > n)
        return 0;
    if(i==n)
        return enemy[n];

    if( memory[i] == -1)
    {
        sum1 += enemy[i]+sol(n, m, i+m);
        sum2 += sol(n,m,i+1);

        return memory[i] = max(sum1, sum2);
    }
    else
        return memory[i];

}

int main()
{
    //freopen("input.txt", "r", stdin);
    int n,m,x;
    scanf("%d %d", &n, &m);

    enemy.push_back(0);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        enemy.push_back(x);
    }
    memset(memory, -1, sizeof(memory));

    printf("%d\n", sol(n,m,m+1));

    return 0;
}