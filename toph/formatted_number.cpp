#include<bits/stdc++.h>
using namespace std;
#define lld long long int

int main()
{
    lld a,cnt = 0;
    scanf("%lld", &a);
    if (a == 0)
        printf("%d", 0);

    vector < char > s;

    while(a)
    {
        int x = a % 10;
        a /= 10;
        s.push_back(x);
        cnt++;
        if(cnt == 3)
        {
            s.push_back(',');
            cnt = 0;
        }
    }

    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != ',')
        {
            int x = s[i];
            printf("%d", x);
        }
        else if(i != 0)
            printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}