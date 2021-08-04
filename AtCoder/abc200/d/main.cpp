#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<vector<int>> b(201);
    int m = min(n, 8);
    for (int i = 1; i < (1 << m); i++) {
        int s = 0;
        vector<int> c;
        for (int j = 0; j < m; j++) {
            if (i & (1 << j)) {
                c.push_back(j + 1);
                s += a[j]; s %= 200;
            }
        }
        if (b[s].size() != 0) {
            cout << "Yes" << endl;
            cout << c.size() << " ";
            for (int k = 0; k < c.size(); k++) {
                if (k == c.size() - 1) cout << c[k] << endl;
                else cout << c[k] << " ";
            }
            c = b[s];
            cout << c.size() << " ";
            for (int k = 0; k < c.size(); k++) {
                if (k == c.size() - 1) cout << c[k] << endl;
                else cout << c[k] << " ";
            }
            return 0;
        }
        else b[s] = c;
    }
    cout << "No" << endl;
    return 0;
}
