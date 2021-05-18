#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r, x;
    cin>>n>>r;

    queue<int>q;


    for(int i=1; i<=n; i++){
        cin>>x;

        q.push(x);
    }

    for(int i=1; i<=r; i++){
        x = q.front(); q.pop();
        q.push(x);
    }

    cout<<q.front()<<" "<<x<<endl;

    return 0;
}
