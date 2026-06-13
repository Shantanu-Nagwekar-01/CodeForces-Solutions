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
        int x;
        cin >> x;
        int res = abs(x - 1);
        for (int i = 2; i <= n; i++)
        {
            cin >> x;
            int dif = abs(x - i);
            res = __gcd(res, dif);
        }
        cout << res << endl;
    }

    return 0;
}