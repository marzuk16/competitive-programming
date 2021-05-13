#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int test;
    string s;

    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        cin>>s;
        int flag = 1;

        for(int i=0; i<s.size()/2; i++)
        {
            if(s[i] != s[s.size()-i-1])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("Case %d: Yes\n", T);
        else
            printf("Case %d: No\n",T);

    }

    return 0;
}