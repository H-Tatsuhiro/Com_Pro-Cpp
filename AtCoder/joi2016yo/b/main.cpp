#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j < n; j++) {
            if (a[j] % i > a[j + 1] % i) swap(a[j], a[j + 1]);
        }
    }
    for (int i = 1; i <= n; i++) cout << a[i] << endl;
}
