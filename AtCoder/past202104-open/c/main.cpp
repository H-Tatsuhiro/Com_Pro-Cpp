#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> A;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vector<int> a(k, 0);
        for (int j = 0; j < k; j++) cin >> a[j];
        A.push_back(a);
    }
    int p, q; cin >> p >> q;
    vector<int> B(p, 0);
    for (int i = 0; i < p; i++) cin >> B[i];
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int k = 0; k < p; k++) for (int j = 0; j < A[i].size(); j++) if (B[k] == A[i][j]) cnt++;
        if (cnt >= q) ans++;
    }
    cout << ans << endl;
}
