#include<bits/stdc++.h>
using namespace std;

int a[16];

void print(int sz){
    for(int i=0; i<sz; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void recur(int pos, int sz){
    if(pos == sz){
        print(sz);
        return;
    }

    a[pos] = 0;
    recur(pos+1, sz);
    a[pos] = 1;
    recur(pos+1, sz);

}

int main()
{
    recur(0,3);

    return 0;
}