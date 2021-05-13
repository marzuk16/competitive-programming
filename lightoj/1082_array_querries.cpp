#include <bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

const int mxsz = 100005;
int arr[mxsz];
int tree[mxsz * 4];

int minimum(int n, int m)
{
    return n > m ? m : n;
}

void buildtree(int node, int start, int end)
{
    if (start == end)
    {
        //cout << "arr[" << start << "]: " << arr[node] << endl;
        tree[node] = arr[start];
        return;
    }

    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;

    buildtree(left, start, mid);
    buildtree(right, mid + 1, end);

    tree[node] = minimum(tree[left], tree[right]);
}

int query(int node, int start, int end, int i, int j)
{
    if (i > end || j < start)
        return 99999999;
    if (start >= i && end <= j)
        return tree[node];

    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;

    int q1 = query(left, start, mid, i, j);
    int q2 = query(right, mid + 1, end, i, j);

    return minimum(q1, q2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //FI;
    //FO;

    int test, n, q;
    cin >> test;

    for (int T = 1; T <= test; T++)
    {

        cin >> n >> q;
        for (int i = 1; i <= n * 4; i++)
            tree[i] = 1000000;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        buildtree(1, 1, n);
        /*         cout << "arr: ";
        for (int i = 1; i <= n * 4; i++)
            cout << arr[i] << " ";
        cout << endl; */

        /*         for (int i = 1; i <= n * 4; i++)
            cout << tree[i] << " ";
        cout << endl; */

        cout << "Case " << T << ":" << endl;
        while (q--)
        {
            int i, j;
            cin >> i >> j;
            cout << query(1, 1, n, i, j) << endl;
        }
    }

    return 0;
}