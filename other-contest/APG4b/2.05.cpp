#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int sum(int n) {
    if (n == 0){
        return 0;
    }
    int s = sum(n - 1);
    return s + n;
}

void solve() {
    cout << sum(2) << endl;
    cout << sum(3) << endl;
    cout << sum(10) << endl;
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