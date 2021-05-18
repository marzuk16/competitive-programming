#include<bits/stdc++.h>
using namespace std;

string sol(string s){

    //cout<<"inside sol"<<endl;

    string res = "";
    res += s[0];
    //cout<<"res: "<<res<<endl;
    int ind = 1, ub = s.size();

    while(ind <= (ub-1)){
        if(ind >= (ub-1)) break;

        while(s[ind] == res[res.size()-1] && ind < ub-1 ){
            ind++;
        }
        if(res[res.size()-1] != s[ind]) res += s[ind];
    }

    return res;
}

int main(){

    int n;
    cin>>n;

    string s;
    cin.ignore();
    for(int i=1; i<=n; i++){
        //cin.ignore();
        getline(cin, s);
        //cout<<"string: "<<s<<endl;
        cout<<sol(s)<<endl;
    }

    return 0;
}
