#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, k1, k, h, m;
	while (cin>>t){

        while(t--){
            cin>>h>>m;
    		k = 23 - h;
	    	k1 = 60 - m;
		    cout<<k * 60 + k1<<endl;
        }
	}
    return 0;
}