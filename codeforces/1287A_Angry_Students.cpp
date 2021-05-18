#include <bits/stdc++.h>

using namespace std ;

int solve( string s )
{
    int tym = 0 ;

    if( s.size() == 1 )
        return 0 ;

    while( 1 )
    {
        bool done = true ;

        for( int i = 0 ; i < s.size() - 1 ; i ++ )
        {
            if( s[i] == 'A' && s[i+1] == 'P' )
                done = false ;
        }

        if( !done )
        {
            for( int i=s.size()-1; i>=1; i-- )
            {
                if( s[i-1] == 'A' && s[i] == 'P')
                    s[i] = 'A';
            }
        }
        else
            break ;

        tym ++ ;
            //cerr << line << endl ;
    }

    return tym ;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int test ;

    cin>>test ;

    for( int T=1; T<=test; T++ )
    {
        int k ;

        cin>>k;

        string s ;

        cin>>s;

        int res = solve( s ) ;

        cout << res << endl ;
            //cerr << i << endl ;
    }

    return 0 ;
}