#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

const lld mxsz = 100005;    

struct info{
    lld propagateValue, sum;
};

info tree[mxsz * 4];

void update(lld node, lld start, lld end, lld i, lld j, lld newValue){
    
    if( j < start || i > end ) return;

    if(start >= i && end <= j) {

        tree[node].sum += newValue * (end - start + 1);
        tree[node].propagateValue += newValue;

        return;
    }

    lld left = node << 1;
    lld right = left + 1;
    lld mid = ( start + end ) >> 1;

    update(left, start, mid, i, j, newValue);
    update(right, mid + 1, end, i, j, newValue);

    tree[node].sum = tree[left].sum + tree[right].sum + tree[node].propagateValue * (end - start + 1);
}

lld query(lld node, lld start, lld end, lld i, lld j, lld carry = 0){

    if(end < i || start > j) return 0;
    if(start >= i && end <= j) return tree[node].sum + ( carry * (end - start + 1) );

    lld left = node << 1; // multiply by 2
    lld right = left + 1;
    lld mid = (start + end) >> 1; //division by 2

    lld q1 = query(left, start, mid, i, j, carry + tree[node].propagateValue);
    lld q2 = query(right, mid+1, end, i, j, carry + tree[node].propagateValue);

    return q1 + q2;
}

void input(){

    lld n, commands, i, j, newValue, op;
    cin>>n>>commands;

    for(lld i=0; i<=n*4; i++){
        tree[i].sum = 0;
        tree[i].propagateValue = 0;
    }

    for(lld ind=1; ind <= commands; ind++){
        cin>>op;

        if(op){

            cin>>i>>j;

            cout<<query(1, 1, n, i+1, j+1)<<endl;
        }else{
            cin>>i>>j>>newValue;

            update(1, 1, n, i+1, j+1, newValue);
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // FI;
    // FO;

    lld test;
    cin>>test;
    
    for(lld T=1; T<=test; T++){
      
      cout<<"Case "<<T<<":"<<endl;
      input();
    }

    return 0;
}