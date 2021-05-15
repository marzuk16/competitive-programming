#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

int n, k, s, total;

void dfs(int sum, int x, int cnt) {
    if (sum > s) return ;
    if (k - 1 == cnt && sum == s) {
        // cout<<"in sum: "<<sum<<" total: "<<total<<endl;
        total++;
        return ;
    }
    //cout<<"sum: "<<sum<<" total: "<<total<<endl;
    for (int i = x + 1; i <= n; i++){
        dfs(sum + i, i, cnt + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //FI;
    //FO;

      while(cin>>n>>k>>s && n && k && s) {

        total = 0;
        for (int i = 1; i <= n; i++) {
            dfs(i, i, 0);
        }
        cout<<total<<endl;
    }

    return 0;
}