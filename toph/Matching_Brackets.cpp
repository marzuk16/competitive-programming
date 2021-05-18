#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

bool sol(string s)
{
    //cerr<<s<<endl;
    stack<char>stk;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            stk.push(s[i]);
        else
        {
            if(stk.empty())
                return false;
            if(s[i] == ')' && stk.top() == '(')
                stk.pop();
            else if(s[i] == '}' && stk.top() == '{')
                stk.pop();
            else if(s[i] == ']' && stk.top() == '[')
                stk.pop();
            else
                return false;

        }
    }
    if(stk.empty())
        return true;
    else
        return false;
}

int main()
{
    //freopen("input.txt", "w", stdin);

    string s;
    cin>>s;

    bool res = sol(s);

    if(res)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
