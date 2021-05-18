#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,k,x;
    vector<int>v;

    cin>>n>>k;

    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout<<v[(v.size()-k)]<<endl;

    return 0;
}