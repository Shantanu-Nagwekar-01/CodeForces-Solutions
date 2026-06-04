#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll MOD = 1e9 + 7;
vector<ll> dp;
// GOT TLE
//  ll solve(ll sum, vector<int> &c)
//  {
//      if (sum < 0)
//      {
//          return 0;
//      }
//      if (sum == 0)
//      {
//          return 1;
//      }
//      if (dp[sum] != 0)
//      {
//          return dp[sum];
//      }
//      ll res = 0;
//      for (int i : c)
//      {
//          res += (solve(sum - i, c) % MOD);
//      }
//      dp[sum] = res % MOD;
//      return dp[sum];
//  }

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<int> c(n);
    dp.resize(x + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    dp[0] = 1;
    for (ll i = 1; i <= x; i++)
    {
        // ll sum = 0;

        for (int j : c)
        {
            if (i - j >= 0)
            {
                if (dp[i] >= MOD - dp[i - j])
                {
                    dp[i] = (dp[i - j] + dp[i]) - MOD;
                }
                else
                {
                    dp[i] += dp[i - j];
                }
            }
        }
        // dp[i] += sum;
    }
    cout << dp[x] << endl;
    // for (int i = 0; i <= x; i++)
    // {
    //     cout << i << " : " << dp[i] << " ,";
    // }
    // cout << solve(x, c) << endl;
    return 0;
}

// another accepted solution O(n.x)
//  int main()
//  {
//      ll n, x;
//      cin >> n >> x;
//      vector<int> c(n);
//      dp.resize(x + 1, 0);

//     for (ll i = 0; i < n; i++)
//     {
//         cin >> c[i];
//     }
//     dp[0] = 1;
//     for (ll i = 1; i <= x; i++)
//     {
//         ll sum = 0;

//         for (int j : c)
//         {
//             if (i - j >= 0)
//             {
//                 sum += dp[i - j];
//             }
//         }
//         dp[i] += sum % MOD;
//     }
//     cout << dp[x] << endl;

//     return 0;
// }