#include<bits/stdc++.h>
using namespace std;

int sol(int n, int k, string s)
{
    int cnt = 0;
    if (n == k)
        return 0;

    for(int i=0; i<s.size(); i++)
    {
        for(int j=(i-k); j<i; j++)
        {
            //cout<<i<<"i: "<<s[i]<<j<<" j: "<<s[j]<<endl;
            if(s[i] == s[j] && j > -1)
            {
                cnt++;
                break;
                //cout<<"i: "<<s[i]<<"j: "<<s[j]<<endl;
            }
        }

    }

    return cnt;
}

int main()
{
    //fopen("input.txt", "w", stdin);

    int test;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        printf("Case %d: %d\n", T, sol(n,k,s));
    }
    return 0;
}