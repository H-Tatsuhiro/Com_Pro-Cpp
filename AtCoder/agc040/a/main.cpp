#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> inline void chmax(T&a , T b) { if (a < b) { a = b; }}
int main() {
    string s; cin >> s;
    long long int ans = 0, n = s.length() + 1;
    vector<int> c(n, 0);
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '<') chmax(c[i + 1], c[i] + 1);
    }
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] == '>') chmax(c[i], c[i + 1] + 1);
    }
    for (auto x : c) ans += x;
    cout << ans << endl;
}
