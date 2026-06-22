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
        string s, t;
        cin >> s >> t;
        int f1[26] = {0};
        for (auto& c : t)
        {
            f1[c - 'A']++;
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (f1[s[i] - 'A'] == 0)
            {
                s[i] = '.';
            }
            else
            {
                f1[s[i] - 'A']--;
            }
        }
        string r = "";
        for (auto &c : s)
        {
            if (c != '.')
            {
                r += c;
            }
        }
        // cout << s <<" " <<  r << " " << t << endl;
        if (r == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}