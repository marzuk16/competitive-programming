#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    string s;
    cin>>s;

    int cnt = 1;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
            cnt++;
        else
            cnt = 1;
        if(cnt >= 7)
        {
            printf("YES\n");
            return 0;
        }

    }

    printf("NO\n");
    return 0;
}