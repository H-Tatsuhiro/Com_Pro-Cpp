#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++) cin >> a[i];
    vector<int> v(n + 1, -1);
    for (int i = 0; i < m; i++) v[a[i]] = a[i];
    int tmp = -1;
    for (int i = n; i >= 0; i--) {
        if (v[i] != -1) tmp = v[i];
        else v[i] = tmp;
    }
    for (int i = 1; i <= n; i++) cout << v[i] - i << endl;
}


