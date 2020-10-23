#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(10e5 + 1, 0);
    for (int i = 0; i < m; i++) {
        int b, c; cin >> b >> c;
        a[b]++, a[c + 1]--;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        if (a[i] == m) cnt++;
    }
    cout << cnt << endl;
}
