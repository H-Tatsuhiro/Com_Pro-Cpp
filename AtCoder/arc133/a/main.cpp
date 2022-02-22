#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b;
    for (int i = 0; i < n; i++) cin >> a[i];
    int m = a[n - 1];
    for (int i = 0; i < n; i++) {
        if (a[i] > a[i + 1]) {
            m = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) if (a[i] != m) b.push_back(a[i]);
    for (int i = 0; i < b.size(); i++) cout << b[i] << (i == b.size() - 1 ? '\n' : ' ');
}
