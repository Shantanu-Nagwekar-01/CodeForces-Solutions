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
        if (n < 4 || n&1) {
            cout << -1 << endl;
            continue;
        }
        if (!(n&1)) {
            cout << (n + 5)/ 6 << " " << n / 4 << endl;
        }

    }

    return 0;
}