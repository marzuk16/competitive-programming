#include<bits/stdc++.h>
using namespace std;

int solve(string s){

    int start = -1, end;
    for(int i=0; i<s.size(); i++){
        if( start == -1 && s[i] == '1') start = i;
        if(s[i] == '1') end = i;
    }

    int cnt = 0;

    if(start != -1){
        for(int i=start; i<= end; i++){
            if(s[i] == '0') cnt++;
        }
    }

    return cnt;
}

int main(){
    int test;
    cin>>test;

    while(test--){
        string s;
        cin>>s;

        cout<<solve(s)<<endl;
    }

    return 0;
}