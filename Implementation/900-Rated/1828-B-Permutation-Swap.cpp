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
        int res = INT_MAX;
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            int dif = abs(x - i);
            if (dif != 0)
            {
                res = min(res, dif);
            }
        }
        cout << res << endl;
    }

    return 0;
}