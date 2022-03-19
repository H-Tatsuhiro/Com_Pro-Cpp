#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    cout << a - b << endl;
    int c, d; cin >> c >> d;
    cout << c + d << endl;
    int e, f; cin >> e >> f;
    cout << (e <= f ? (f - e + 1) : 0) << endl;
    int g, h, i; cin >> g >> h >> i;
    int sum = g + h + i;
    cout << sum / 3 + 1 << endl;
    int j; cin >> j;
    vector<string> str = {"a", "aa", "aaa", "aaai", "aaaji", "aabaji", "agabaji", "dagabaji"};
    cout << str[j - 1] << endl;
    long long int k, l, m, n; cin >> k >> l >> m >> n;
    long long int in = -1, out = -1;
    for (long long int ii = 1; ii <= 10000000; ii++) {
        if (ii % 59 == k && ii % 61 == l) {
            in = ii + (59 * 61 * (m - 1));
            break;
        }
    }
    vector<long long int> vec = {6, 28, 496, 8128, 33550336};
    for (int ii = 0; ii < vec.size(); ii++) {
        if (abs(in - vec[ii]) >= n) {
            out = vec[ii];
            break;
        }
    }
    cout << min(in, out) << endl << max(in, out) << endl;
    long long int o, p, q, r, s, t, u, v, w, x, y, z; cin >> o >> p >> q >> r >> s >> t >> u >> v >> w >> x >> y >> z;
    long long int ans = o + p + q;
    ans %= 9973;
    ans *= (r + s + t), ans %= 9973, ans *= (u + v + w), ans %= 9973, ans *= (x + y + z), ans %= 9973;
    cout << ans << endl;
}
