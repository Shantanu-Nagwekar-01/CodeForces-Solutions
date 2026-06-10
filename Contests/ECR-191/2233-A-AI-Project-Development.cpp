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
        ll n, x, y, z;
        cin >> n >> x >> y >> z;
        ll res = LLONG_MAX;
        res = min(res, max(1LL, (n + x + y - 1) / (x + y)));
        res = min(res, max(1LL, z + ((n - (x * z) + (10 * y) + x - 1) / (10 * y + x))));
        // double a = ceil(max(1.0 * n / x, 1.0));
        // double b = ceil(max(1.0 * n / (x + y), 1.0));
        // // cout << (n - (z * x)) / (10 * y + x) << " ";
        // double c = ceil(max((1.0 * (n - (z * x)) / (10 * y + x)), 1.0));
        // // cout << a << " " << b << " " << c << endl;
        // res = min(res, max(1LL * static_cast<long>(a), 1LL));
        // res = min(res, max(1LL * static_cast<long>(b), 1LL));
        // res = min(res, max(1LL * static_cast<long>(c) + z, 1LL));
        cout << res << endl;
    }

    return 0;
}