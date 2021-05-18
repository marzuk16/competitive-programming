#include<bits/stdc++.h>
using namespace std;

int a[] = {1,1,2,6,24,120,720,5040,40320,362880,3628800};

int sol(string s, int d){
    int zero = 0,n = s.size(),res;
    for(int i=0; i<n; i++){
        if(s[i] == '0') zero = 1;
    }

    res = (a[n] / a[n-d]);

    if(zero){
        res -= (a[n-1] / a[n-d]);
    }

    return res;
}

int main(){
    int test,d;
    cin>>test;

    string s;
    while(test--){
        cin>>s>>d;

        cout<<sol(s, d)<<endl;
    }

    return 0;
}
