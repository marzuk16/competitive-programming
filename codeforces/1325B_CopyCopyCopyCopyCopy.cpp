#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
	while (test--){
        vector<int> vec;
        int n, x;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>x;
            vec.push_back(x);
        }
        //cout<<"siez: "<<vec.size()<<endl;
        sort(vec.begin(), vec.end());

        int res = 1;

        for(int i=1; i<vec.size(); i++){
            if(vec[i] != vec[i-1]) res++;
            //cout<<"e: "<<res<<endl;
        }

        cout<<res<<endl;

	}
    return 0;
}