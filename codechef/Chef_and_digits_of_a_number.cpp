#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int main()
{
    int test;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }

        if(zero == 1 || one == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}