#include<bits/stdc++.h>
using namespace std;

struct info{
    string s;
    int salary;
};

bool operator<(info a, info b)
{
    if(a.salary > b.salary)
        return true;
    return false;
}
vector<info > vec;

void sol(int n, int d, int k)
{
    sort(vec.begin(), vec.end());

//    for(int i=0; i<n; i++)
//        cout<<vec[i].s<<" "<<vec[i].salary<<endl;

    int flag = 0;
    vector<int>taken;


    for(int i=0; i<n; i++)
    {
        int sum = 0;

        taken.clear();
        for(int j=i; j<k && j<n; j++)
        {
            sum += vec[j].salary;
            taken.push_back(j);
            //cout<<"sum "<<i<<j<<": "<<sum<<endl;
            if(sum >= d)
                break;
        }
        if(sum >= d)
        {
            flag = 1;
            break;
        }
    }

    if( !flag)
        printf("impossible\n");
    else
    {
        printf("%d\n", taken.size());
        for(int i=0; i<taken.size(); i++)
            cout<<vec[taken[i]].s<<", YOU ARE FIRED!"<<endl;
    }
}

int main()
{
    //freopen("input.txt","r",stdin);

    int n,d,k;
    scanf("%d %d %d", &n, &d, &k);

    info tmp;

    for(int i=1; i<=n; i++)
    {
        cin>>tmp.s>>tmp.salary;
        vec.push_back(tmp);
    }
    sol(n,d,k);

    return 0;
}