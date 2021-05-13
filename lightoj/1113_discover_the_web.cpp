#include <bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //FI;
    //FO;

    int test;
    cin >> test;

    string command, tmp;

    for (int T = 1; T <= test; T++)
    {

        stack<string> backward, forward;
        backward.push("http://www.lightoj.com/");

        cout << "Case " << T << ":\n";

        while (1)
        {
            getline(cin, command);

            if (command[0] == 'V')
            {
                tmp = "";
                for (int i = 6; i < command.size(); i++)
                    tmp += command[i];
                backward.push(tmp);
                cout << tmp << endl;

                while (!forward.empty())
                    forward.pop();
            }
            else if (command[0] == 'B')
            {
                if (backward.size() > 1)
                {
                    //cout << "backward size: " << backward.size() << endl;
                    tmp = backward.top();
                    backward.pop();

                    cout << backward.top() << endl;

                    forward.push(tmp);
                }
                else
                    cout << "Ignored" << endl;
            }
            else if (command[0] == 'F')
            {
                if (!forward.empty())
                {
                    tmp = forward.top();
                    forward.pop();
                    backward.push(tmp);
                    cout << tmp << endl;
                }
                else
                    cout << "Ignored" << endl;
            }
            else if (command[0] == 'Q')
                break;
        }
    }

    return 0;
}