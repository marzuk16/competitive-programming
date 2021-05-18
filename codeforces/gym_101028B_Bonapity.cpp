#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    string s1,s2;

    scanf("%d", &test);

    while(test--)
    {
        cin>> s1>> s2;
        if(s1.size() != s2.size())
            printf("No\n");
        else
        {
            for(int i=0; i<s1.size(); i++)
            {
                int x = s1[i];
                int y = s2[i];
                if(x < 91 )
                {
                    s1[i] = (x + 32);
                }
                if(y < 91 )
                {
                    s2[i] = (y + 32);
                }

                if(s1[i] == 'b' || s1[i] == 'B' || s1[i] == 'p' || s1[i] == 'P')
                {
                    s1[i] = 'p';
                }
                if(s1[i] == 'e' || s1[i] == 'E' ||  s1[i] == 'i' || s1[i] == 'I')
                {
                    s1[i] = 'e';
                }
                if(s2[i] == 'b' || s2[i] == 'B' || s2[i] == 'p' || s2[i] == 'P')
                {
                    s2[i] = 'p';
                }
                if(s2[i]== 'e' || s2[i] == 'E' || s2[i] == 'i' || s2[i] == 'I')
                {
                    s2[i] = 'e';
                }

            }

            //cout<<s1<<" "<<s2<<endl;

            if(s1 == s2)
                printf("Yes\n");
            else
                printf("No\n");

            }
        }

    return 0;
}