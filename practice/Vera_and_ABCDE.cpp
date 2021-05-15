#include<bits/stdc++.h>
using namespace std;

vector< vector< char > > p;

void build(char s)
{
    char a[5][3];
    char b[5][3];
    char c[5][3];
    char d[5][3];
    char e[5][3];

    a[0][0] = '*'; a[0][1] = '*'; a[0][2] = '*';
    a[1][0] = '*'; a[1][1] = '.'; a[1][2] = '*';
    a[2][0] = '*'; a[2][1] = '*'; a[2][2] = '*';
    a[3][0] = '*'; a[3][1] = '.'; a[3][2] = '*';
    a[4][0] = '*'; a[4][1] = '.'; a[4][2] = '*';

    b[0][0] = '*'; b[0][1] = '*'; b[0][2] = '*';
    b[1][0] = '*'; b[1][1] = '.'; b[1][2] = '*';
    b[2][0] = '*'; b[2][1] = '*'; b[2][2] = '*';
    b[3][0] = '*'; b[3][1] = '.'; b[3][2] = '*';
    b[4][0] = '*'; b[4][1] = '*'; b[4][2] = '*';

    c[0][0] = '*'; c[0][1] = '*'; c[0][2] = '*';
    c[1][0] = '*'; c[1][1] = '.'; c[1][2] = '.';
    c[2][0] = '*'; c[2][1] = '.'; c[2][2] = '.';
    c[3][0] = '*'; c[3][1] = '.'; c[3][2] = '.';
    c[4][0] = '*'; c[4][1] = '*'; c[4][2] = '*';

    d[0][0] = '*'; d[0][1] = '*'; d[0][2] = '*';
    d[1][0] = '*'; d[1][1] = '.'; d[1][2] = '*';
    d[2][0] = '*'; d[2][1] = '.'; d[2][2] = '*';
    d[3][0] = '*'; d[3][1] = '.'; d[3][2] = '*';
    d[4][0] = '*'; d[4][1] = '*'; d[4][2] = '*';

    e[0][0] = '*'; e[0][1] = '*'; e[0][2] = '*';
    e[1][0] = '*'; e[1][1] = '.'; e[1][2] = '.';
    e[2][0] = '*'; e[2][1] = '*'; e[2][2] = '*';
    e[3][0] = '*'; e[3][1] = '.'; e[3][2] = '.';
    e[4][0] = '*'; e[4][1] = '*'; e[4][2] = '*';

    cerr<<"S: "<<s<<endl;
    if(s=='A')
    {
        p[0].push_back(a[0][0]); p[0].push_back(a[0][1]); p[0].push_back(a[0][2]);
        p[1].push_back(a[1][0]); p[1].push_back(a[1][1]); p[1].push_back(a[1][2]);
        p[2].push_back(a[2][0]); p[2].push_back(a[2][1]); p[2].push_back(a[2][2]);
        p[3].push_back(a[3][0]); p[3].push_back(a[3][1]); p[3].push_back(a[3][2]);
        p[4].push_back(a[4][0]); p[4].push_back(a[4][1]); p[4].push_back(a[4][2]);
    }
    else if(s=='B')
    {
        p[0].push_back(b[0][0]); p[0].push_back(b[0][1]); p[0].push_back(b[0][2]);
        p[1].push_back(b[1][0]); p[1].push_back(b[1][1]); p[1].push_back(b[1][2]);
        p[2].push_back(b[2][0]); p[2].push_back(b[2][1]); p[2].push_back(b[2][2]);
        p[3].push_back(b[3][0]); p[3].push_back(b[3][1]); p[3].push_back(b[3][2]);
        p[4].push_back(b[4][0]); p[4].push_back(b[4][1]); p[4].push_back(b[4][2]);
    }
    else if(s=='C')
    {
        p[0].push_back(c[0][0]); p[0].push_back(c[0][1]); p[0].push_back(c[0][2]);
        p[1].push_back(c[1][0]); p[1].push_back(c[1][1]); p[1].push_back(c[1][2]);
        p[2].push_back(c[2][0]); p[2].push_back(c[2][1]); p[2].push_back(c[2][2]);
        p[3].push_back(c[3][0]); p[3].push_back(c[3][1]); p[3].push_back(c[3][2]);
        p[4].push_back(c[4][0]); p[4].push_back(c[4][1]); p[4].push_back(c[4][2]);
    }
    else if(s=='D')
    {
        p[0].push_back(d[0][0]); p[0].push_back(d[0][1]); p[0].push_back(d[0][2]);
        p[1].push_back(d[1][0]); p[1].push_back(d[1][1]); p[1].push_back(d[1][2]);
        p[2].push_back(d[2][0]); p[2].push_back(d[2][1]); p[2].push_back(d[2][2]);
        p[3].push_back(d[3][0]); p[3].push_back(d[3][1]); p[3].push_back(d[3][2]);
        p[4].push_back(d[4][0]); p[4].push_back(d[4][1]); p[4].push_back(d[4][2]);
    }
    else if(s=='E')
    {
        p[0].push_back(e[0][0]); p[0].push_back(e[0][1]); p[0].push_back(e[0][2]);
        p[1].push_back(e[1][0]); p[1].push_back(e[1][1]); p[1].push_back(e[1][2]);
        p[2].push_back(e[2][0]); p[2].push_back(e[2][1]); p[2].push_back(e[2][2]);
        p[3].push_back(e[3][0]); p[3].push_back(e[3][1]); p[3].push_back(e[3][2]);
        p[4].push_back(e[4][0]); p[4].push_back(e[4][1]); p[4].push_back(e[4][2]);
    }

}

int main()
{
    int n;
    string s;
    scanf("%d", &n);
    cin>>s;

    for(int i=0; i<n; i++)
    {
        build(s[i]);
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<p[i].size(); j++)
        {
            printf("%c", p[i][j]);
        }
        printf("\n");
    }



    return 0;
}
