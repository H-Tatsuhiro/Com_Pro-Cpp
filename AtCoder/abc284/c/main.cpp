#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu.hpp>
using namespace std;
using namespace atcoder;
int main() {
    int n, m; cin >> n >> m;
    dsu d(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        d.merge(a - 1, b - 1);
    }
    auto v = d.groups();
    cout << v.size() << endl;
}
