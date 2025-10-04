#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  // 入力を受け取る
    int a = (s[0] - '0'); // 1文字目の値
    int b = (s[2] - '0'); // 3文字目の値
    cout << a * b << endl;
}
