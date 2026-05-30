#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> dp;
// ll solve(ll x, vector<int> &coins)
// {
//     GOT TLE
//     if (x < 0)
//     {
//         return LLONG_MAX;
//     }
//     if (x == 0)
//     {
//         return 0;
//     }
//     if (dp[x] != LLONG_MAX)
//     {
//         return dp[x];
//     }
//     ll best = LLONG_MAX;
//     for (int c : coins)
//     {
//         ll rem = solve(x - c, coins);
//         if (rem != LLONG_MAX)
//         {
//             best = min(best, 1 + rem);
//         }
//     }
//     return dp[x] = best;
// }

void solve(ll x, vector<int> &coins)
{
    dp[0] = 0;
    for (ll i = 1; i <= x; i++)
    {
        for (int c : coins)
        {
            if (i - c >= 0 && dp[i - c] != LLONG_MAX)
            {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
}
int main()
{
    ll n, x;
    cin >> n >> x;
    dp.resize(x + 1, LLONG_MAX);
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    solve(x, coins);
    if (dp[x] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dp[x] << endl;
    }
    return 0;
}