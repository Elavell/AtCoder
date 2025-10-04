#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    int ans = 0;
    rep(i,n) ans += a[i]*b[i];
    if (ans == 0) cout << "Yes\n";
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