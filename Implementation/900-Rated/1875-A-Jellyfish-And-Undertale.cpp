#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, res = 0;
        cin >> a >> b >> n;
        res += b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            res += (min(x, a - 1));
        }
        cout << res << endl;
    }
}