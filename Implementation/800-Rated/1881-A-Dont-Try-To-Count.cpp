#include <bits/stdc++.h>
using namespace std;

bool valid(string& x, string& s) {
    int n = x.size(), m = s.size();
    if (n < m) {
        return false;
    }
    for (int i = 0; i < (n - m + 1); i++) {
        if (x.substr(i, m) == s) {
            return true;
        }
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        if (valid(x,s)) {
            cout<< 0 <<endl;
            continue;
        }
        int res = -1;
        for (int i = 1; i < 6; i++) {
            x += x;
            if (valid(x,s)){
                res = i;
                break;
                
                
            }
        }
        cout<<res<<endl;
    }
}