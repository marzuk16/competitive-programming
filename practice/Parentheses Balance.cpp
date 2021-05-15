#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;

    scanf("%d", &test);

    cin.ignore();

    while(test--)
    {
        string s;
        stack<char> stk;

        getline(cin,s);

        for(int i=0; i<s.size(); i++)
        {
            if(!stk.empty() && s[i]==')' && stk.top()=='(')
                stk.pop();
            else if(!stk.empty() && s[i]==']' && stk.top()=='[')
               stk.pop();
            else
                stk.push(s[i]);
        }

        if(stk.empty())
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
