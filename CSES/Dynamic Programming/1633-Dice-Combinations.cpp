#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
vector<long long> dp;
long long solve(long long n)
{
    if (n < 0)
    {
        return 0;
    }

    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = 0;
    for (long long i = 1; i <= 6; i++)
    {
        dp[n] += (solve(n - i) % MOD);
    }
    return dp[n]%MOD;
}
int main()
{

    long long n;
    cin >> n;
    dp.resize(n + 1, -1);
    cout << solve(n) << endl;
    return 0;
}