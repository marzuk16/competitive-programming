#include<bits/stdc++.h>
using namespace std;

vector<string>v;

bool trie(int n)
{
    sort(v.begin(), v.end());
//    for(int i=0; i<v.size(); i++)
//        cout<<v[i]<<" ";

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            string tmp1, tmp2;
            if(v[i].size() < v[j].size() )
            {
                tmp1 = v[i];
                tmp2 = v[j].substr(0, tmp1.size());
            }
            else
            {
                tmp1 = v[j];
                tmp2 = v[i].substr(0, tmp1.size());;
            }
            int flag = 0;
            for(int k=0; k<tmp1.size(); k++)
                if(tmp1[k] != tmp2[k])
                {
                    flag = 1;
                    break;
                }
            if(flag)
                break;
            if( !flag)
                return false;
        }
    }

   return true;
}

int main()
{
    int test,n;
    string s;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        v.clear();

        scanf("%d", &n);
        int flag = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            v.push_back(s);

//            if( !flag)
//                flag = trie(s);
        }
        flag = trie(n);

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}