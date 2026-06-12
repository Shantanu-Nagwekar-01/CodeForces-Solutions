#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll solve(ll a, ll b, ll x)
{
    if (a == b)
    {
        return 0;
    }
    if (abs(a - b) == 1)
    {
        return 1;
    }
    ll c1 = abs(a - b);
    ll c2 = 1 + solve(a / x, b, x);
    ll c3 = 1 + solve(a, b / x, x);
    return min(c1, min(c2, c3));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, x;
        cin >> a >> b >> x;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        if (a == b - 1 || b == a - 1)
        {
            cout << 1 << endl;
            continue;
        }
        ll res = abs(a - b);
        res = min(res, solve(a, b, x));
        cout << res << endl;
    }

    return 0;
}