#include<bits/stdc++.h>
using namespace std;

struct info{
    int r1,r2,c1,c2;
    char ch;
}obj;

int main()
{
    int test,r,c,ins;

    scanf("%d", &test);

    while(test--)
    {
        vector<info>v;
        scanf("%d %d %d", &r, &c, &ins);

        for(int i=1; i<=ins; i++)
        {
            scanf("%d %d %d %d %c",&obj.r1, &obj.c1, &obj.r2, &obj.c2, &obj.ch);

            v.push_back(obj);
        }

        char build[105][105];
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                build[i][j] = '.';
            }
        }
        for(int z=0; z<v.size(); z++)
        {
            for(int i=v[z].r1; i<=v[z].r2; i++)
            {
                for(int j=v[z].c1; j<=v[z].c2; j++)
                {
                    build[i][j] = v[z].ch;
                }
            }
        }
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                printf("%c", build[i][j]);
            }
            printf("\n");
        }
        //printf("\n");
    }

    return 0;
}