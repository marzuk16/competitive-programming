#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int main()
{
    int test;
    string s;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        cin>>s;
        string ss = s;
        reverse(s.begin(), s.end());

        if(ss == s)
            printf("wins\n");
        else
            printf("losses\n");
    }

    return 0;
}