#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    while(cin>>s)
    {
        int upper=0, lower=0, digit=0,res=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                lower = 1;
            else if(s[i] >= 'A' && s[i] <= 'Z')
                upper = 1;
            else
                digit = 1;
            if(lower && upper && digit)
            {
                res++;
                upper = 0;
                lower = 0;
                digit = 0;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
