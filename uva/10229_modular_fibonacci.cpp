#include<bits/stdc++.h>
using namespace std;

#define lld long long int

lld mod;

struct info{
    lld ar[2][2];
};

info matrixMul(lld x[2][2], lld y[2][2]){

    info res;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            res.ar[i][j] = 0;
            for(int k=0; k<2; k++){
                res.ar[i][j] += ((x[i][k]%mod) * (y[k][j]%mod) % mod);
            }
        }

    }

    return res;
}

info power(info matrix, lld n){
    info tmp, res;
    if(n == 1) return matrix;
    tmp = power(matrix, n/2);
    res = matrixMul(tmp.ar, tmp.ar);

    if(n%2){
        res = matrixMul(res.ar, matrix.ar);
    }

    return res;
}

lld sol(lld n){
    //cout<<"inside sol....:"<<endl;
    info init, res;

    init.ar[0][0] = 1; init.ar[0][1] = 1;
    init.ar[1][0] = 1; init.ar[1][1] = 0;

    res = power(init, n);

    return res.ar[0][0] % mod;

}

int main(){
    lld n, m;

    while(cin>>n>>m){

        mod = 1 << m;
        //cout<<"mod: "<<mod<<endl;
        lld res;
        if( n < 2) res = n;
        else res = sol(n-1);

        cout<<res<<endl;

    }
    return 0;
}