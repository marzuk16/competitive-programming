#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);

    int test, n;
    string s;
    cin>>test;

    while(test--){
        cin>>n;
        cin>>s;

        int cnt = 0;

        for(int i=(n-1); i>=0; i--){
            if(s[i] == ')')cnt++;
            else break;
        }

        if(cnt > (n-cnt))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}