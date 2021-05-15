#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int test,p;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &p);
        int cnt = 0;
        while(p>0)
        {
            for(int i = 11; i >= 0; i--)
            {
                if(p >= a[i])
                {
                    p -= a[i];
                    cnt++;
                    i++;
                }
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
