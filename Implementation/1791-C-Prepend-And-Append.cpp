#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int l = 0, r = n - 1;
        while (l < r && s[l] != s[r])
        {
            l++;
            r--;
        }
        cout << (r - l + 1) << endl;
    }
}