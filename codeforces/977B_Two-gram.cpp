#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    auto lp = s.begin() + 1;
    auto rp = s.end() - 1;

    cout << string(lp + 1, rp - 1) << "\n";

    //int beg_off = distance(s.begin(), lp) + 1;
    //int end_off = distance(lp, rp) - beg_off;

    //cout << s.substr(beg_off, end_off);
}
