#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n,t,a; cin >> n >> t >> a;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    ld dmin = 1e9;
    ll ans = -1;
    rep(i,n){
        ld T =  t - h[i] * 0.006;
        ld d = abs(a-T);
        if (d < dmin) {
            dmin = d;
            ans = i;
        }
    }
    cout << (ans + 1) << endl;
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