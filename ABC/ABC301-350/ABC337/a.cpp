#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n; cin >> n;
    int T = 0;
    int A = 0;
    rep(i,n){
        int x,y;
        cin >> x >> y;
        T += x;
        A += y;
    }
    if (T>A) cout << "Takahashi\n";
    else if (T<A) cout << "Aoki\n";
    else cout << "Draw\n";
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