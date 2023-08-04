#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    s += s;
    long long int ans = 1LL << 60;
    for (int i = 0; i < n; i++) {
        long long int tmp = a * i;
        for (int j = 0; j < n / 2; j++) if (s[i + j] != s[i + n - 1 - j]) tmp += b;
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}


