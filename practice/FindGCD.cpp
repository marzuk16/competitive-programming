#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin>>n;

    vector<int> vec;

    for(int i=1; i<=n; i++){
        cin>>x;
        vec.push_back(x);
    }

    int smallest = 20000, largest = -1;

    for(int i=0; i<vec.size(); i++){
        if(vec[i] > largest) largest = vec[i];
        if(vec[i] < smallest) smallest = vec[i];
    }
    
    int gcd = __gcd(largest, smallest);

    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;
    cout<<"GCD: "<<gcd<<endl;
    
    return 0;
}