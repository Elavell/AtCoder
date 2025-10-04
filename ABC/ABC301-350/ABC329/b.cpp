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
    rep(i, n) cin >> a[i];
    int mx = *max_element(a.begin(), a.end());
    int ans = -1;
    rep(i,n){
        if (a[i]==mx) continue;
        ans = max(ans,a[i]);
    }
    cout << ans << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    ll T =  1;
    //cin >> T; // マルチテストケースか確認！
    while (T--) solve();
    return 0;
}