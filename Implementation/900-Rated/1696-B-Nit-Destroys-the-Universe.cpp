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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1 && a[0] != 0)
        {
            cout << 1 << endl;
            continue;
        }
        ll i = 0, j = n - 1, res = LLONG_MAX;
        while (i < n && a[i] == 0)
        {
            i++;
        }
        if (i == n)
        {
            cout << 0 << endl;
            continue;
        }
        while (j > i && a[j] == 0)
        {
            j--;
        }
        bool zero = false;
        for (int k = i; k <= j; k++)
        {
            if (a[k] == 0)
            {
                zero = true;
                break;
            }
        }
        if (zero)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}