#include <iostream>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

#define size 3000005

int a[size];

void makePrime()
{
    for (int i = 2; i < size; i++){
        if (!a[i]){
            for (int j = 2; i * j < size; j++){
                a[i * j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //FI;
    //FO;

    makePrime();

    lld n;

    while(cin>>n && n){
        lld sum = 2, t = n-1, t1 = n + 1;

        if(!a[n]){
            cout<<0<<endl;
            continue;
        }

        while(t && a[t]){
            sum ++;
            t --;
        }

        while(a[t1]){
            sum ++;
            t1 ++;
        }

        cout<<sum<<endl;
    }

    return 0;
}