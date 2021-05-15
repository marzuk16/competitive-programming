#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        string s;
        cin>>s;

        map<char,int>mp;
        map<char,int>vis;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            vis[s[i]] = 1;
        }

        printf("Case #%d:\n", T);

        for(int i=0; i<s.size(); i++)
        {
            if(vis[s[i]])
            {
                printf("%c %d\n", s[i], mp[s[i]]);
                vis[s[i]] = 0;
            }
        }
    }

    return 0;
}
