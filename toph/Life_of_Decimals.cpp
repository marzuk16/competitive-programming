#include<bits/stdc++.h>
using namespace std;

int main(){

    int test, n;
    double pi = 2 * acos(0.0);
    long long int PI = pi * 1000000000000;

    int digits[13];
    digits [0] = 0;
    //cout<<PI<<endl;
    for(int i=1; i<=12; i++){
        digits[13-i] = PI % 10;
        PI /= 10;
    }
//
//    for(int i = 0; i<13; i++){
//        cout<<digits[i]<<" ";
//    }


    while(cin>>test){
        while(test--){
            cin>>n;

            cout<<digits[n]<<endl;
        }
    }

    return 0;
}
