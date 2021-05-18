#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int state[7][7][7];
int x,y,z;

int sol(int a, int b, int c)
{
    int xCnt = 0, yCnt = 0, zCnt = 0;

    if(a>x || b>y || c>z) return 0;
    if(a==x && b==y && c==z) return 1;
    if(state[a][b][c] != -1) return state[a][b][c];

    xCnt = sol(a+1, b, c);
    yCnt = sol(a, b+1, c);
    zCnt = sol(a, b, c+1);

    return state[a][b][c] = xCnt+yCnt+zCnt;
}

int main()
{
    //freopen("input.txt", "w", stdin);
    //freopen("output.txt", "r", stdout);

    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        memset(state, -1, sizeof(state));

        scanf("%d %d %d", &x, &y, &z);

        printf("Case #%d: %d\n", T, sol(0,0,0));
    }
    return 0;
}
