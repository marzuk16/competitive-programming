#include<bits/stdc++.h>
using namespace std;

int n,i;
string str;
char stk[129];
int pop();
int push(char c);
int pop()
{
    if(n<=0)
        cout<<"Stack is null"<<endl;
    else
        n=n-1;
}

int push (char c)
{
    if(n>=10)
        cout<<"Stack is full"<<endl;
    else
    {
        n=n+1;
        stk[n]=str[i];
    }
}

int main()
{
    int test;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        //string str;
        getline(cin,str);

        for(i=0;i<str.length();i++)
        {
            if(!stk.empty() && str[i]==')' && stk[n]=='(')
            {
                stk.pop();
            }
            else if(!stk.empty() && str[i]==']' && stk[n]=='[')
            {
               stk.pop();
            }
            else
            {
                stk.push(str[i]);
            }
        }

        if(stk.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
