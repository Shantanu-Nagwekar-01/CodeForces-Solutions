#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0, c = 1;
        char x = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == x)
            {
                c++;
            }
            else
            {
                res = max(res, c);
                c = 1;
                x = s[i];
            }
        }
        res = max(res, c);
        cout << res + 1 << endl;
    }

    return 0;
}