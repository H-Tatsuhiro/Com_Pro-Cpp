#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, w; cin >> n >> w;
    vector<int> s(n, 0), t(n, 0), p(n, 0);
    for (int i = 0; i < n; i++) cin >> s[i] >> t[i] >> p[i];
    vector<long long int> v(10e6, 0), x(10e6, 0);
    for (int i = 0; i < n; i++) v[s[i]] += p[i], v[t[i]] -= p[i];
    for (int i = 1; i < 10e6; i++) v[i] += v[i - 1];
    bool ans = true;
    for (int i = 0; i < 10e6; i++) if (v[i] > w) ans = false;
    cout << (ans ? "Yes" : "No") << endl;
}
