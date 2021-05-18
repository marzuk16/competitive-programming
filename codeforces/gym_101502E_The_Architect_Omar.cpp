#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    string s;

    scanf("%d", &test);

    while(test--)
    {
        vector<string> bed;
        vector<string> kitchen;
        vector<string> living;

        scanf("%d", &n);

        for(int i=1; i<=n; i++)
        {
            cin>>s;
            if(s[0] == 'b' || s[0] == 'B')
                bed.push_back(s);
            if(s[0] == 'k' || s[0] == 'K')
                kitchen.push_back(s);
            if(s[0] == 'l' || s[0] == 'L')
                living.push_back(s);
        }

        int a = min(kitchen.size(), living.size());
        int b = bed.size()/2;

        printf("%d\n", min(a,b));


    }

    return 0;
}