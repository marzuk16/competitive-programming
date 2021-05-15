#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    string s;

    scanf("%d", &test);
    while(test--)
    {
        cin>>s;

        if(s.size() == 1)
            printf("%d\n", s[0]-'0');
        else
        {
            int sum = s[0]-'0' + s[s.size()-1]-'0';

            printf("%d\n", sum);
        }
    }

    return 0;
}
