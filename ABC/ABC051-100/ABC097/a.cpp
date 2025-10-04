#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int a,b,c,d; cin >> a >> b >> c >> d;
    if (abs(a-c) <= d) cout << "Yes\n";
    else if (abs(a-b) <= d && abs(b-c) <= d) cout << "Yes\n";
    else cout << "No\n";
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