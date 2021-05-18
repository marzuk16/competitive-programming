#include <bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //FI;
    //FO;

    int test, n;
    cin>>test;
    
    for(int T=1; T<=test; T++){
      cin>> n;

      if(n % 4) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }

    return 0;
}