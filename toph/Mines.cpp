#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "w", stdin)  ;

    int r,c;
    scanf("%d %d", &r, &c);

    char a[15][15];

    cin.ignore();
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
            scanf("%c", &a[i][j]);

        cin.ignore();
    }


    //cerr<<a[1][1]<<endl;

    int res[15][15];
    int row[] = {0,0,1,-1,-1,-1,1,1};
    int col[] = {1,-1,0,0,-1,1,1,-1};

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            //cerr<<a[i][j]<<endl;
            if(a[i][j] == '*')
                res[i][j] = -1;
            if(a[i][j] == '.')
            {
                //cerr<<"i : "<<i<<" j : "<<j<<endl;
                int cnt = 0;
                for(int k=0; k<8; k++)
                {
                    int nxtRow = i+row[k];
                    int nxtCol = j+col[k];
                    //cerr<<" nxtRow: "<<nxtRow<<" nxtCol: "<<nxtCol<<endl;
                    if( (a[nxtRow][nxtCol] == '*') && (nxtRow>0 && nxtRow<=r) && (nxtCol>0 && nxtCol<=c))
                    {
                        cnt++;

                    }
                }
                if(!cnt)
                    res[i][j] = -2;
                else
                    res[i][j] = cnt;
            }
        }
    }

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(res[i][j] == -1)
                printf("%c", '*');
            else if(res[i][j] == -2)
                printf("%c", '.');
            else
                printf("%d", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
