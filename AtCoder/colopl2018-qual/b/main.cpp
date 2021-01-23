#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    string s; cin >> s;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (s[i] == '1') {
            if (a > x) ans += x;
            else ans += a;
        }
        else ans += a;
    }
    cout << ans << endl;
}
