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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == k)
        {
            cout << "NO" << endl;
            continue;
        }
        ll sum = 0LL;
        for (char c : s)
        {
            sum += (c - '0');
        }
        for (ll i = 1; i <= n - k; i++)
        {
            if (i + k - 1 < n)
            {
                if (s[i - 1] == '0' && s[i + k - 1] == '0')
                {
                    continue;
                }
                if (s[i - 1] == '0' && s[i + k - 1] == '1')
                {
                    continue;
                }
                if (s[i - 1] == '1' && s[i + k - 1] == '0')
                {
                    sum -= 1LL;
                    s[i - 1] = '0';
                    s[i + k - 1] = '1';
                    if (sum == 0)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                    continue;
                }
                if (s[i - 1] == '1' && s[i - 1 + k] == '1')
                {
                    sum -= 2LL;
                    s[i - 1] = '0';
                    s[i - 1 + k] = '0';
                    if (sum == 0)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                    continue;
                }
            }
            else
            {
                if (s[i - 1] == '0')
                {
                    continue;
                }
                if (s[i - 1] == '1')
                {
                    sum -= 1LL;
                    s[i - 1] = '0';
                    // s[i + k - 1] = '1';
                    if (sum == 0)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                    continue;
                }
            }
            // cout << "SUM: " << sum << endl;
        }
        if (sum != 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}