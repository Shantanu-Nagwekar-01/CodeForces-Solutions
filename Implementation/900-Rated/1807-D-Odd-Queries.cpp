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
        ll n, q, l, r, k, sum;
        cin >> n >> q;
        vector<ll> pref(n + 1, 0);
        ll x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            pref[i] = x + pref[i - 1];
        }
        // vector<vector<int>> a(q, vector<int>(3));

        // for (int i = 0; i < q; i++)
        // {
        //     cin >> a[i][0] >> a[i][1] >> a[i][2];
        // }
        sum = pref[n];
        for (int i = 0; i < q; i++)
        {
            // l = a[i][0], r = a[i][1], k = a[i][2];
            cin >> l >> r >> k;
            ll temp = sum - (pref[r] - pref[l - 1]) + (r - l + 1) * k;
            if (temp & 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}