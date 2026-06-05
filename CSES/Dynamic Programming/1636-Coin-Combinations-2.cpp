#include <bits/stdc++.h>

using namespace std;

using ll = long long;
ll MOD = 1e9 + 7;
vector<ll> dp;
int main()
{
    ll n, x;

    cin >> n >> x;
    vector<ll> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    dp.resize(x + 1, 0);
    dp[0] = 1;
    for (int c : coins)
    {
        for (int i = 1; i <= x; i++)
        {
            if (i - c >= 0)
            {
                if (dp[i] >= MOD - dp[i - c])
                {
                    dp[i] = dp[i] + dp[i - c] - MOD;
                }
                else
                {
                    dp[i] = dp[i] + dp[i - c];
                }
            }
        }
    }
    cout << dp[x] << endl;
}