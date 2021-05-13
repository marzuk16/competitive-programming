#include<bits/stdc++.h>
using namespace std ;

int main( )
{
    int testcase ;
    cin >> testcase ;
    map< string , int > m ;
    map < string , int > ::iterator it ;
    getchar() ;
    while( testcase -- )
    {
        string s;
        getline( cin , s ) ;
        stringstream ss ( s ) ;
        string res ;
        while ( ss >> res )
        {
            m[ res ] ++ ;
            break ;
        }
    }
    for( it = m.begin() ; it != m.end() ; it ++ )
    {
        cout << it -> first << " " << it -> second << endl ;
    }

    return 0 ;
}
