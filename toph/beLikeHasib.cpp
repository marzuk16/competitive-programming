#include<bits/stdc++.h>
using namespace std;

#define lld long long int

lld n,x;

int sol(){
    lld left = 1, right = n, mid;

    int cnt = 0;

    while (left < right){
        mid = (left+right)/2;    
        //cout<<"mid: "<<mid<<" cnt: "<<cnt<<endl;
        if(mid >= x)right = mid;
        else left = mid+1;
        cnt++;
    }

    return cnt;
    
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>n>>x;

    cout<<sol()<<endl;

    return 0;
}