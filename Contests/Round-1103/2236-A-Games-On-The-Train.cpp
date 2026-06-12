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
        int n;
        cin >> n;
        ll mn = LLONG_MAX, mx = LLONG_MIN;
        ll x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mn = min(x, mn);
            mx = max(x, mx);
        }
        cout << mx + 1 - mn << endl;
    }

    return 0;
}