#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

const int mxsz = 200005;

lld potmeters[mxsz], tree[mxsz * 4];

void update(int node, int start, int end, int pos, int newValue){
    
    if( pos < start || pos > end ) return;
    if(start >= pos && end <= pos) {
        tree[node] = newValue;
        return;
    }

    int left = node * 2;
    int right = left + 1;
    int mid = ( start + end ) / 2;

    update(left, start, mid, pos, newValue);
    update(right, mid + 1, end, pos, newValue);

    tree[node] = tree[left] + tree[right];
}

lld query(int node, int start, int end, int i, int j){

    if(end < i || start > j) return 0;
    if(start >= i && end <= j) return tree[node];

    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;

    int q1 = query(left, start, mid, i, j);
    int q2 = query(right, mid+1, end, i, j);

    return q1 + q2;
}

void buildTree(int node, int start, int end){

    if(start == end){
        
        tree[node] = potmeters[start];
        
        return;
    }

    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;  

    buildTree(left, start, mid);
    buildTree(right, mid+1, end);

    tree[node] = tree[left] + tree[right];
}

void input(int n){

    memset(potmeters, 0, sizeof(potmeters));
    memset(tree, 0, sizeof(tree));

    for(int i=1; i<=n; i++){
        cin>>potmeters[i];
    }

    buildTree(1, 1, n);

    string operation;
    pair<int, int> tmp;

    while(cin>> operation && operation != "END"){
        cin>>tmp.first>>tmp.second;

        if(operation == "S") update(1, 1, n, tmp.first, tmp.second);
        else cout<<query(1, 1, n, tmp.first, tmp.second)<<endl;  
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // FI;
    // FO;

    int n, cas = 0;
    while(cin>>n && n){
        
        if(cas) cout<<endl;
        cout<<"Case "<< ++cas<<":"<<endl;
        input(n);
    }

    return 0;
}