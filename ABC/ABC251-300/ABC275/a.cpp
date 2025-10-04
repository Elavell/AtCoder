#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n; cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int count;
    int mx = *max_element(h.begin(),h.end());
    rep(i,n){
        if(h[i] == mx) count = i+1;
        else continue;
    }
    cout << count << '\n';
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