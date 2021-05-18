#include<bits/stdc++.h>
using namespace std;

#define mx 10000000
#define lld long long int

int status[(mx/32)+2];
vector<int>primes;

bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}

void bitSieve(int N)
{
	 int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }

	 primes.push_back(2);
	 for(i=3;i<=N;i+=2)
		 if( Check(status[i>>5],i&31)==0)
            primes.push_back(i);
}

int main()
{
    //fopen("input.txt", "w", stdin);
    bitSieve(10000000);
    //cout<<primes[primes.size()-1]<<endl;;

    int n;
    scanf("%d", &n);
    printf("%d\n", primes[n-1]);

//    for(int i=0; i<primes.size(); i++)
//        cout<<primes[i]<<" ";
//    cout<<endl;

    return 0;
}
