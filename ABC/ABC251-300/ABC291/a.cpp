#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    string s; cin >> s;
    rep(i,s.size()){
        if(isupper(s[i])){
            cout << i+1;
            break;
        }
    }
    cout << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    ll T = 1;
    //cin >> T; // マルチテストケースか確認！
    while (T--) solve();
    return 0;
}