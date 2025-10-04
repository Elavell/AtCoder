#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int N,T; cin >> N >> T;
    vector<int> c(N);
    vector<int> t(N);
    rep(i,N) cin>> c[i] >> t[i];
    int MAX = 1 << 30;
    int ans = MAX;
    rep(i,N) {
        if (t[i] <= T){
            ans = min(ans, c[i]);
        }
    }
    if (ans < MAX) cout << ans << endl;
    else cout << "TLE\n";
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