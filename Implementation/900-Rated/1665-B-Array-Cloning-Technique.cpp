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
        ll n;
        cin >> n;
        ll mx = 0;
        // cin >> mxe;

        map<ll, ll> mp;
        // mp[mxe]++;
        // mx = max(mx, mp[mxe]);
        for (ll i = 0; i < n ; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        if (mp.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll res = n - mx;
        // ll k = static_cast<long long>(ceil(log2((double)n / mx))); wrong approach here
        // cout << res + max(k, 0LL) << endl;
        // ll N = n - mx;
        ll f = mx;
        while (f < n)
        {
            res++;
            f += min(f, n - f);
        }
        cout << res << endl;
    }

    return 0;
}