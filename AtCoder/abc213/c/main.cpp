#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int h, w, n; cin >> h >> w >> n;
    vector<int> a(n, 0), b(n, 0);
    unordered_map<int, int> H, M;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<int> c = a, d = b;
    sort(c.begin(), c.end()), sort(d.begin(), d.end());
    int cc = 1, dd = 1;
    c.push_back(1000000001), d.push_back(1000000001);
    for (int i = 0; i < n; i++) {
        if (c[i] != c[i + 1]) H[c[i]] = cc, cc++;
        if (d[i] != d[i + 1]) M[d[i]] = dd, dd++;
    }
    for (int i = 0; i < n; i++) cout << H[a[i]] << " " << M[b[i]] << endl;
}
