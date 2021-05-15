#include<bits/stdc++.h>
using namespace std;

struct info {
    string name;
    double res;
};

vector< info > vec;

bool operator < (info a, info b)
{
    if(a.res == b.res)
        return a.name < b.name;
    else
        return a.res > b.res;
}

int main()
{
    info i;
    i.name = "s";
    i.res = 0;
    vec.push_back(i);

    int n;
    scanf("%d", &n);

    while(n--)
    {
        cin>>i.name;
        scanf("%lf", &i.res);

        vec.push_back(i);
    }
    //cerr<<"v.size:"<<vec.size()<<endl;
    sort(vec.begin()+1, vec.end());

    int pos = 0;
    for(int i=1; i<vec.size(); i++)
    {
        if(vec[i-1].res != vec[i].res) pos++;

        cout<<pos<<"."<<vec[i].name<<endl;

    }

    return 0;
}
