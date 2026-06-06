#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> k >> x;
        ll smallestsum = k * (k + 1) / 2;

        ll largestsum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);

        if (x <= largestsum && x >= smallestsum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}