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
        ll n, z = 0, xo = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 0)
            {
                z++;
            }
            xo ^= x;
        }
        if (z == n)
        {
            cout << 0 << endl;
            continue;
        }
        if (xo == 0)
        {
            cout << 1 << endl;
            cout << 1 << " " << n << endl;
            continue;
        }
        if (n & 1)
        {
            cout << 4 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
    }

    return 0;
}