#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, a, b, k; cin >> n >> a >> b >> k;
    unordered_map<int, int> m;
    bool t = true;
    m[a]++, m[b]++;
    for (int i = 0; i < k; i++) {
        int c; cin >> c; m[c]++;
        if (m[c] > 1) t = false;
    }
    if (t) cout << "YES" << endl;
    else cout << "NO" << endl;
}
