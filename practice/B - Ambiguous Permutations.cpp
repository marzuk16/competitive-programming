#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;

    while(1)
    {
        vector<int>v;

        scanf("%d", &n);
        if( !n ) break;

        int i;
        v.push_back(0);

        for(i=1; i<=n; i++)
        {
            scanf("%d", &x);
            v.push_back(x);
        }

        for(i=1; i<=v.size(); i++)
        {
            if(v[v[i]] != i) break;
        }

        if(i != n+1)
            printf("not ambiguous\n");
        else
            printf("ambiguous\n");
    }

    return 0;
}

//int main()
//{
//	int n;
//	while(1)
//	{
//		scanf("%d",&n);
//		if(n==0)
//			return 0;
//		int i;
//		int a[n+1];
//		for(i=1;i<=n;i++)
//			scanf("%d",&a[i]);
//		for(i=1;i<=n;i++)
//		{
//			if(a[a[i]]!=i)
//			{
//				break;
//			}
//		}
//		if(i!=n+1)
//			printf("not ambiguous\n");
//		else
//			printf("ambiguous\n");
//	}
//	return 0;
//}
