#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin>>n;
    ll ans = 1;
    for(int i=n; i>0; --i){
        ans *= i;
    }
    cout<<ans<<endl;
}