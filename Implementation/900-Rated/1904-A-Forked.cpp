#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, xk, yk, xq, yq, res = 0;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        set<pair<ll, ll>> visited, v2;
        // up
        ll xkn = xk;
        ll ykn = b + yk;
        // visited.insert({xkn, ykn});
        // up - left
        xkn = xk - a;
        // cout << xkn << " " << ykn << endl;
        visited.insert({xkn, ykn});
        // up-right
        xkn = xk + a;
        // cout << xkn << " " << ykn << endl;
        visited.insert({xkn, ykn});
        // down
        ykn = yk - b;
        // down-left
        xkn = xk - a;
        // cout << xkn << " " << ykn << endl;
        visited.insert({xkn, ykn});
        // down-right
        xkn = xk + a;
        // cout << xkn << " " << ykn << endl;
        visited.insert({xkn, ykn});

        // right
        xkn = xk + b;
        ykn = yk;
        // right-up
        // cout << xkn << " " << ykn+a << endl;
        visited.insert({xkn, ykn + a});
        // right-down
        //  cout << xkn << " " << ykn-a << endl;
        visited.insert({xkn, ykn - a});

        // left
        xkn = xk - b;
        ykn = yk;
        // left-up
        //  cout << xkn << " " << ykn+a << endl;
        visited.insert({xkn, ykn + a});
        // left-down
        //  cout << xkn << " " << ykn-a << endl;
        visited.insert({xkn, ykn - a});

        // now for queen
        // up
        ll xqn = xq;
        ll yqn = b + yq;
        // visited.insert({xkn, ykn});
        // up - left
        xqn = xq - a;

        v2.insert({xqn, yqn});
        // up-right
        xqn = xq + a;
        v2.insert({xqn, yqn});

        // down

        yqn = yq - b;
        // down-left
        xqn = xq - a;
        v2.insert({xqn, yqn});

        // down-right
        xqn = xq + a;
        v2.insert({xqn, yqn});

        // right
        xqn = xq + b;
        // yqn = yq;
        // right-up
        yqn = yq + a;
        v2.insert({xqn, yqn});

        // right-down
        yqn = yq - a;
        v2.insert({xqn, yqn});

        // left
        xqn = xq - b;
        // left-up

        yqn = yq + a;
        v2.insert({xqn, yqn});
        // left-down
        yqn = yq - a;
        v2.insert({xqn, yqn});
        for (auto &x : visited)
        {
            if (v2.count(x))
            {
                res++;
            }
        }
        cout << res << endl;
    }
}