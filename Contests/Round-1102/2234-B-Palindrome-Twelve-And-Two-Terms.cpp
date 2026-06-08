#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 12 == 0)
        {
            cout << 0 << " " << n << endl;
            continue;
        }
        vector<ll> v(12);
        for (ll i = 0; i < 12; i++)
        {
            v[i] = i;
        }
        v[10] = 22;
        ll a = v[n % 12];
        if (a <= n)
        {
            cout << a << " " << n - a << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        // 0, 12, ...... n
        //  a + 12x = n
        //  a = n - 12x
        //
    }
}