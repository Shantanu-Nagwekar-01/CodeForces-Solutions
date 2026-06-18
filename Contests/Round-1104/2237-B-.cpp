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
        ll sum = 0, prev;
        cin >> n;
        cin >> prev;
        sum += prev;
        for (int i = 1; i < n; i++)
        {
            ll x;
            cin >> x;
            if (prev < x)
            {
                x = prev;
            }
            sum += x;
            prev = x;
        }
        cout << sum << endl;
    }
    return 0;
}