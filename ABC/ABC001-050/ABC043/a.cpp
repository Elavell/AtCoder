#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin>>n;
    int res = 0;
    for(int i=1;i<=n;++i){
        res += i;
    }
    cout<<res<<endl;
}