#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    ll a, b, c; cin >> a >> b >>c;
    cout << min(min(a, c),(a+b+c)/3) << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    ll T = 1;
    cin >> T; // マルチテストケースか確認！
    while (T--) solve();
    return 0;
}