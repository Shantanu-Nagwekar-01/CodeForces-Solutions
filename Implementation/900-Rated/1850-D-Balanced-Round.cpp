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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        ll res = 1LL;
        ll l = 0, r = 1;
        while (r < n)
        {
            if (k < a[r] - a[r - 1])
            {
                l = r;
            }
            else
            {
                res = max(res, r - l + 1);
            }
            r++;
        }
        cout << n - res << endl;
    }

    return 0;
}