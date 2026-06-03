#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long num , k;
        cin >> n >> k;
       if ((num % 2 == 0) || ((num - k) % 2 == 0)) {
        cout << "YES" <<endl;
       }
       else {
        cout<<"NO"<<endl;
       }
    }
}