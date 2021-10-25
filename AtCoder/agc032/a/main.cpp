#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> b(n, 0), a(n, 0);
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        if (b[i] > i + 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = b.size() - 1; j >= 0; j--) {
            if (j + 1 == b[j]) {
                a[n - i - 1] = j + 1;
                b.erase(b.begin() + j);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << endl;
}
