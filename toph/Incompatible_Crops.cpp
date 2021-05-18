#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    char grid[30][30];
    for(int i=0; i<30; i++)
        for(int j=0; j<30; j++)
            grid[i][j] = '.';

    scanf("%d %d", &r, &c);

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cin>>grid[i][j];
            //scanf("%c", &grid[i][j]);
        }
    }

    int cnt = 0;

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            //cerr<<j<<" ";
            if(grid[i][j] == '.' && grid[i-1][j] == '.' && grid[i+1][j] == '.' && grid[i][j-1] == '.' && grid[i][j+1] == '.')
            {
                //cerr<<"I: "<<i<<" J: "<<j<<endl;
                cnt++;
            }
        }
        //cerr<<endl;
    }

    printf("%d\n", cnt);



    return 0;
}
