#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++) cin >> a[i];
    vector<int> t(n, 0);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        t[a[i] - 1]++;
        if (t[ans] < t[a[i] - 1]) ans = a[i] - 1;
        else if (t[ans] == t[a[i] - 1] && a[i] - 1 < ans)ans = a[i] - 1;
        cout << ans + 1 << endl;
    }
}


