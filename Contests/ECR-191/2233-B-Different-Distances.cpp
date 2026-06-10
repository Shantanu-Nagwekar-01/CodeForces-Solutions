#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve_even(ll x, ll y, vector<ll> &a)
{
    a.push_back(y);
    a.push_back(x);
    a.push_back(x);
    a.push_back(y);
    a.push_back(x);
    a.push_back(y);
    a.push_back(y);
    a.push_back(x);
}
void solve_odd(ll x, ll y, ll z, vector<ll> &a)
{
    a.push_back(z);
    a.push_back(x);
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    a.push_back(x);
    a.push_back(z);
    a.push_back(y);
    a.push_back(y);
    a.push_back(z);
    a.push_back(x);
    a.push_back(y);
}
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
        vector<ll> a;
        if (n & 1)
        {
            solve_odd(1, 2, 3, a);
            if (n > 3)
            {
                for (ll i = 4; i <= n - 1; i += 2)
                {
                    solve_even(i, i + 1, a);
                }
            }
        }
        else
        {
            for (ll i = 1; i < n; i += 2)
            {
                solve_even(i, i + 1, a);
            }
        }
        for (ll i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}