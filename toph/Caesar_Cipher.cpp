#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    string s,res;
    getchar();
    getline(cin,s);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != ' ')
        {
            int x = s[i] - 96;
            int y = x - n;
            if(y > 0)
            {
                char c = y + 96;
                res.push_back(c);
            }
            else
            {
                char c = (26 + y) + 96;
                res.push_back(c);
            }
        }
        else
            res.push_back(' ');
    }

    cout<<res<<endl;


    return 0;
}
