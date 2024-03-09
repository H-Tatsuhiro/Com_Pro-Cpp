#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m, l; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m, 0);
    for (int i = 0; i < m; i++) cin >> b[i];
    cin >> l;
    vector<int> c(l, 0);
    for (int i = 0; i < l; i++) cin >> c[i];
    int q; cin >> q;
    unordered_map<long long int, bool> Map;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                Map[a[i] + b[j] + c[k]] = true;
            }
        }
    }
    for (int i = 0; i < q; i++) {
        long long int x; cin >> x;
        cout << (Map[x] ? "Yes" : "No") << endl;
    }
}


