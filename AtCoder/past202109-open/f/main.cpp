#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    vector<int> a(n, -1), v;
    for (int i = 0; i < n; i++) if (s[i] == '0') v.push_back(i + 1);
    if (v.size() == 0) for (int i = 0; i < n; i++) a[i] = i + 1;
    else if (v.size() == 1) {
        cout << -1 << endl;
        return 0;
    }
    else {
        for (int i = 0; i < n; i++) if (s[i] == '1') a[i] = i + 1;
        int x = v.size();
        for (int i = 0; i < v.size(); i++) {
            a[v[i] - 1] = v[(i + 1) % x];
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << (i == n - 1 ? '\n' : ' ');
    return 0;
}
