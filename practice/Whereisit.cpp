#include<bits/stdc++.h>
using namespace std;

#define lld long long

vector<lld> values, keys;

int binarySearch(int l, int r, int x){

	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (values[mid] == x)
			return mid;

		if (values[mid] > x)
			return binarySearch(l, mid - 1, x);

		return binarySearch(mid + 1, r, x);
	}

	return -1;
}

int main(){

    lld n, m, x;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        cin>>x;
        values.push_back(x);
    }  
    for(int i=1; i<=m; i++){
        cin>>x;
        keys.push_back(x);
    }

    for (int i = 0; i < m; i++){
        int index = binarySearch(0, values.size()-1, keys[i]);
        if(index == -1) cout<<"NO"<<endl;
        else cout<<"YES "<<++index<<endl;
    }
    
    return 0;
}