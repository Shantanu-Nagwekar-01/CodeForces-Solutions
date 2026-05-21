#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool zero = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                zero = true;
            }
        }
        if (!zero) {
            cout << 0 << endl;
            continue;
        }
        int res = 0;
        int cnt = 0;
        for (int r = 0; r < n; r++) {
            if (a[r] == 1) {
                cnt = 0;
            }
            else {
                cnt++;
            }
            res = max(res, cnt);
        }

        cout << res << endl;

    }
}