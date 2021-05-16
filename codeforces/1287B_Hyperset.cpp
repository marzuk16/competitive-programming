#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<string >v;

bool binarySearch(int start, string s)
{
    int mid, ends = n-1;
    while(start <= ends)
    {
        mid = (start+ends) / 2;
        //cout<<"mid: "<<v[mid]<<" = "<<s<<endl;
        if(v[mid] == s)
            return true;
        if(v[mid] < s)
            start = mid+1;
        else
            ends = mid-1;
    }

    return false;
}

int solve()
{
    int way = 0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            string s,s1,s2;
            s1 = v[i];
            s2 = v[j];

            for(int t=0; t<k; t++)
            {
                if(s1[t] == s2[t])
                    s.push_back(s1[t]);
                else if( (s1[t] == 'S' && s2[t] == 'T') || (s1[t] == 'T' && s2[t] == 'S') )
                    s.push_back('E');

                else if( (s1[t] == 'E' && s2[t] == 'T') || (s1[t] == 'T' && s2[t] == 'E') )
                    s.push_back('S');

                else if( (s1[t] == 'S' && s2[t] == 'E') || (s1[t] == 'E' && s2[t] == 'S') )
                    s.push_back('T');
            }
            //cout<<"S: "<<s<<endl;

            if( binarySearch(j+1, s) )
                way++;

        }
    }

    return way;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);

    string s;

    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>s;
        //cout<<"I: "<<i<<" s: "<<s<<endl;
        v.push_back(s);
    }
    //cout<<"sdq dh "<<endl;
    sort(v.begin(), v.end());

    cout<<solve()<<endl;

    return 0;
}