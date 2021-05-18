#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//FI;
    //FO;

    lld t, n, d, x;

    cin>>t;
    while(t--){
        cin>>n>>d;
		vector<lld> vec;

        for(lld i=0; i<n; i++){
            cin>>x;
			vec.push_back(x);
        }
        sort(vec.begin(), vec.end());

        int isOk = 0;

        for(lld i=1; i<n; i++){
            if(vec[i] + vec[i-1] <= d){
                isOk = 1;
                break;
            }
        }
        if(vec[n-1] <= d || isOk){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}