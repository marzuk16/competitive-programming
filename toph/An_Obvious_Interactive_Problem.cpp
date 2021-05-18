#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int left=0, right=1000000, mid, cnt=0;
    string s;
    while(cnt <= 25)
    {
        mid=(left+right)/2;
        cout<<mid<<endl;
        cin>>s;
        
        cnt++;
        
        if(s=="Bigger") left = mid+1;
        else if(s=="Smaller") right = mid;
        else break;
    }
}


int main()
{
    solve();
    return 0;
}