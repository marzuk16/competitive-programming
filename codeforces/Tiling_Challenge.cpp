#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt = 0;
    scanf("%d", &n);

    char grid[55][55];
    for(int i=0; i<55; i++)
    {
        for(int j=0; j<55; j++)
        {
            grid[i][j] = '&';
        }
    }

    getchar();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%c", &grid[i][j]);
        }
        getchar();
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(grid[i][j] == '#')
                cnt++;
            if( (grid[i][j] == '.') && (grid[i-1][j] == '.' && (i-1) > 0) && (grid[i][j-1] == '.' && j-1 > 0) && (grid[i+1][j] == '.' && i+1 <= n ) && (grid[i][j+1] == '.' && j+1 <= n ) )
            {
                grid[i][j] = '@';
                grid[i-1][j] = '@';
                grid[i][j-1] = '@';
                grid[i+1][j] = '@';
                grid[i][j+1] = '@';

                cnt += 5;
            }
        }
    }

//    for(int i=1; i<=n; i++)
//    {
//        for(int j=1; j<=n; j++)
//        {
//            printf("%c ", grid[i][j]);
//        }
//        cerr<<endl;
//    }


    if(cnt != (n*n) )
        printf("NO\n");
    else
        printf("YES\n");


    return 0;
}
