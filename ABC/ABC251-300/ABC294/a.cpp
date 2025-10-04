#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<ld, ld>;
using Arr3 = array<ll, 3>;
template<class T> using pq = priority_queue<T, vector<T>, greater<T>>;
const ll LINF=0x1fffffffffffffff;
const ll MINF=-0x1fffffffffffffff;
const int INF=0x3fffffff;
const int MOD=1000000007;
const int MODD=998244353;
const ld DINF=INFINITY;
const ld PI=3.14159265358979323846;
const int dx4[] = {0, 1, 0, -1};
const int dy4[] = {1, 0, -1, 0};
const int dx8[] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy8[] = {1, 0, -1, 0, 1, 1, -1, -1};
#define overload5(a,b,c,d,e,name,...) name
#define overload4(a,b,c,d,name,...) name
#define overload3(a,b,c,name,...) name
#define rep1(n) rep2(_,n)
#define rep2(i,n) rep3(i,0,n)
#define rep3(i,a,b) for(ll i = a; i < (b); i++)
#define rep4(i,a,b,c) for(ll i = a; i < (b); i+=(c))
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) rrep2(_,n)
#define rrep2(i,n) for(ll i = n; i--;)
#define rrep3(i,a,b) for(ll i = b; i-->(a);)
#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define em emplace
#define pop pop_back
#define vec(type, name, ...) vector<type> name(__VA_ARGS__)
#define vv(type, name, h, w, ...) vector<vector<type>> name(h, vector<type>(w, ##__VA_ARGS__))
#define vvv(type, name, h, w, d, ...) vector<vector<vector<type>>> name(h, vector<vector<type>>(w, vector<type>(d, ##__VA_ARGS__)))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define pcnt(x) __builtin_popcountll(x)
template<class T>istream& operator>>(istream&i,vector<T>&v){rep(j,sz(v))i>>v[j];return i;}

void solve() {
    int n; cin >> n;
    vec(int,a,n);
    cin >> a;
    rep(i,n){
        if(a[i]%2==0) cout << a[i] << ' ';
    }
    cout << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    ll T = 1;
    //cin >> T; // マルチテストケースか確認！
    rep(T) solve();
    return 0;
}