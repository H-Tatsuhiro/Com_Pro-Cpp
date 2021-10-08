#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<char> a(k, '.');
    vector<int> b(k, 0);
    for (int i = 0; i < k; i++) {
        cin >> a[i] >> b[i];
        b[i]--;
    }
    vector<long long int> v(n, -1);
    const int MOD = 998244353;
    long long int ans = 1;
    for (int i = 0; i < n; i++) {
        long long int cnt = 0;
        bool t = false;
        for (int j = 0; j < k; j++) {
            if (b[j] == i) {
                v[i] = 1, t = true;
                break;
            }
            if (a[j] == 'L' && i > b[j]) cnt++;
            else if (a[j] == 'R' && i < b[j]) cnt++;
        }
        if (!t) v[i] = cnt;
    }
    for (int i = 0; i < n; i++) ans *= v[i], ans %= MOD;
    cout << ans << endl;
}
