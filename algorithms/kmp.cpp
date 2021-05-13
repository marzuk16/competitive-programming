#include<bits/stdc++.h>
using namespace std;

string text,pattern;
int ft[500];

void failure_table()
{
    int k=1,len=0;
    ft[0]=0;

    while(k<pattern.size())
    {
        if(pattern[k]==pattern[len])
            ft[k++] = ++len;
        else
        {
            if(len)
                len=ft[len-1];
            else
                ft[k++]=0;
        }
    }
//
//    for(int i=0; i<pattern.size(); i++)
//    {
//        cout<<ft[i];
//    }
//    cout<<endl;

}

void kmp()
{
    failure_table();

    int i=0, j=0, ind, f=0;

    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
            if(j==pattern.size())
            {
                ind=i-pattern.size();
                printf("A match found from index %d\n",ind);
                j=ft[j-1];
                f=1;
            }
        }
        else
        {
            if(j)
                j=ft[j-1];
            else
                i++;
        }
    }

    if(!f)
     printf("Match not found :p \n");
}

int main()
{
    cin>>text>>pattern;
//    l=pattern.size();
    kmp();

    return 0;
}
