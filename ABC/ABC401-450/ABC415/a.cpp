#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    int x; cin >> x;
    bool t = false;
    for(int c:a){
        if(x==c) {
            t = true;
            break;
        }
    }
    if(t) cout << "Yes";
    else cout << "No";
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