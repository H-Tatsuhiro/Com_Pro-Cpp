#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < n - 1; i++) {
        if (h[i] >= h[i + 1]) {
            cout << h[i] << endl;
            return 0;
        }
    }
    cout << h[n - 1] << endl;
}
