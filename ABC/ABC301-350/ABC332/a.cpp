#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n,s,k; cin >> n >> s >> k;
    int sum = 0;
    rep(i,n){
        int p,q;
        cin >> p >> q;
        sum += p*q;
    }
    if(sum<s) cout << sum+k << '\n';
    else cout << sum << '\n';
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