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

        int ss=0, wo=0, S=0, ns=0;

        for(int i=1; i<s.size(); i++)
        {
            if(s[i] == 'S' && s[i-1] == 'S')
                ss++;
        }
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i] == 'S')
                S=1;
            if(S && s[i+1] != 'S')
                ns = 1;
            if(S && ns && s[i] == 'S')
            {
                wo++;
                ns = 0;
                S = 0;
                //cerr<<i+1<<" ";
            }
        }

        printf("Case %d: %d / %d\n", T, ss, wo);
    }

    return 0;
}