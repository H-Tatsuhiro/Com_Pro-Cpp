#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    int sum = 0;
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++) {
        int a; cin >> a; sum += a; b[i] = a;
        if (i > 1 && sum < k) {
            cout << i + 1 << endl;
            return 0;
        }
        else if (i > 1) sum -= b[i - 2];
    }
    cout << -1 << endl;
    return 0;
}
