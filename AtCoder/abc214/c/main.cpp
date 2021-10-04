#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> s(n, 0), t(n, 0);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 0; i < 2 * n; i++) t[(i + 1) % n] = min(t[(i + 1) % n], t[i % n] + s[i % n]);
    function<void(vector<long long int>)> out = [](vector<long long int> v) {
        for (auto x : v) cout << x << endl;
    };
    out(t);
}
