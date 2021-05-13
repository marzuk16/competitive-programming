#include <bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

const int sz = 100005;

int arr[sz];
int tree[sz * 4];

void buildTree(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;

    buildTree(left, start, mid);
    buildTree(right, mid + 1, end);

    tree[node] = tree[left] + tree[right];
}

int query(int node, int start, int end, int i, int j)
{
    if (i > end || j < start)
        return 0;
    if (start >= i && end <= j)
        return tree[node];

    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;

    int q1 = query(left, start, mid, i, j);
    int q2 = query(right, mid + 1, end, i, j);

    return q1 + q2;
}

void update(int node, int start, int end, int i, int newValue)
{
    if (i > end || i < start)
        return;
    if (start >= i && end <= i)
    {
        tree[node] = newValue;
        return;
    }

    int left = node * 2;
    int right = left + 1;
    int mid = (start + end) / 2;

    update(left, start, mid, i, newValue);
    update(right, mid + 1, end, i, newValue);

    tree[node] = tree[left] + tree[right];
}

int main()
{
    // auto start = time(NULL);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //FI;
    //FO;
    int test, n, q;
    cin >> test;

    for (int T = 1; T <= test; T++)
    {
        //memset(arr, 0, sizeof(arr));

        cin >> n >> q;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        buildTree(1, 1, n);
        // cout << "tree: ";
        // for (int i = 1; i <= n * 4; i++)
        //     cout << tree[i] << " ";

        cout << "Case " << T << ":\n";
        for (int i = 1; i <= q; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int k;
                cin >> k;
                cout << arr[k + 1] << endl;

                arr[k + 1] = 0;

                update(1, 1, n, k + 1, 0);
            }
            if (x == 2)
            {
                int k, v;
                cin >> k >> v;
                arr[k + 1] += v;

                update(1, 1, n, k + 1, arr[k + 1]);
            }
            if (x == 3)
            {
                int l, r;
                cin >> l >> r;
                cout << query(1, 1, n, l + 1, r + 1) << endl;
            }
        }
    }

    // auto end = time(0);

    // cout << (end - start) / 1000.0 << endl;

    return 0;
}