#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, l, r; cin >> n >> l >> r;
    vector<int> a(n, 0), b;
    for (int &aa: a) cin >> aa;
    for (int aa: a) {
        if (aa <= l) b.push_back(l);
        else if (aa >= r) b.push_back(r);
        else b.push_back(aa);
    }
    for (int i = 0; i < n; i++) cout << b[i] << (i == n - 1 ? '\n' : ' ');
}