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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = 0;
        bool valid = true;
        for (int i = n - 2; i >= 0; i--)
        {

            if (a[i] < a[i + 1])
            {
                continue;
            }
            else
            {
                if (a[i + 1] == 0)
                {
                    cout << -1 << endl;
                    valid = false;
                    break;
                }
                while (a[i] && a[i] >= a[i + 1])
                {
                    a[i] >>= 1;
                    res++;
                }
            }
        }
        if (valid)
            cout << res << endl;
    }

    return 0;
}