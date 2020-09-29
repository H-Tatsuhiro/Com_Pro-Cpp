#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<int> v(n, 0);
    for (int i = 0; i < q; i++) {
        int a, b, c; cin >> a >> b >> c;
        for (int j = a - 1; j < b; j++) v[j] = c;
    }
    for (int i = 0; i < n; i++) cout << v[i] << endl;
}
