#include<bits/stdc++.h>
using namespace std;

vector<int >vec;

int sol(int cur_pos, int last_pos)
{
    int x=0,y;
    if(cur_pos >= vec.size())
        return 0;
    if(vec[cur_pos]>vec[last_pos])
        x = sol(cur_pos+1, cur_pos)+1;
    y = sol(cur_pos+1, last_pos);

    return max(x,y);
}

int main()
{
    int test,n,x;

    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        scanf("%d", &n);
        vec.clear();
        vec.push_back(0);
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &x);
            vec.push_back(x);
        }

        int res=sol(1, 0);

        printf("Case %d: %d\n", T, res);

    }


    return 0;
}
