#include<bits/stdc++.h>
using namespace std;

#define mod 10007
#define lld long long int

struct info{
    int ar[4][4];
};

info matrixMul(int x[4][4], int y[4][4]){

    info res;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            res.ar[i][j] = 0;
            for(int k=0; k<4; k++){
                res.ar[i][j] += ( ( x[i][k] % mod) * ( y[k][j] % mod) ) % mod;
            }
        }
    }

    return res;
}

info power(info matrix, int n){

    if(n == 1) return matrix;

    info tmp, res;
    tmp = power(matrix, n/2);
    res = matrixMul(tmp.ar, tmp.ar);

    if(n%2){
        res = matrixMul(res.ar, matrix.ar);
    }

    return res;
}

info sol(int n, int a, int b, int c){

    info init, res;

    init.ar[0][0] = a; init.ar[0][1] = 0; init.ar[0][2] = b; init.ar[0][3] = 1;
    init.ar[1][0] = 1; init.ar[1][1] = 0; init.ar[1][2] = 0; init.ar[1][3] = 0;
    init.ar[2][0] = 0; init.ar[2][1] = 1; init.ar[2][2] = 0; init.ar[2][3] = 0;
    init.ar[3][0] = 0; init.ar[3][1] = 0; init.ar[3][2] = 0; init.ar[3][3] = 1;

    res = power(init, n);

//    for(int i=0; i<4; i++){
//        for(int j=0; j<4; j++){
//            cout<<res.ar[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    return res;
}

int main(){
    int test;
    cin>>test;

    for(int T=1; T<=test; T++){

        int n, a, b, c, res;

        cin>>n>>a>>b>>c;
        if(n <= 2) res = 0;
        else{
            info tmp = sol(n-2, a, b, c);
            res = ((tmp.ar[0][3] % mod) * c) % mod;
        }
        cout<<"Case "<<T<<": "<<res<<endl;

    }
    return 0;
}