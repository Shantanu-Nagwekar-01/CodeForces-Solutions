#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll bubblesort(vector<ll>& a) {
    ll swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
                swapped = true;
                swaps++;
            }
        }
        if (!swapped) {
            return swaps;
        }
    }
    return swaps;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, ma = 0, mb = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        unordered_map<ll,int> m, p;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]] = i;
            ma = max(ma, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            p[b[i]] = i;
            mb = max(mb, b[i]);
        }
        if (ma > mb) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (m.count(b[i])) {
                m.erase(b[i]);
                p.erase(b[i]);
                continue;
            }
        }
        for (auto& key : p) {
            for (int i = 0; i < n; i++) {
                if (m.count(a[i])) {
                    m.erase(a[i]);
                    a[i] = key.first;
                }
            }
        }
    }

    return 0;
}