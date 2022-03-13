#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, l; cin >> n >> l;
    vector<long long int> x(n, 0), y(n, 0);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    long long int left = 0, right = 1e16;
    while (right - left > 1) {
        long long int mid = (right - left) / 2 + left, tmp = mid;
        bool t = true;
        for (int i = 0; i < n; i++) {
            if (i > 0) tmp += (abs(x[i] - x[i - 1]) + tmp > mid ? abs(mid - tmp) : abs(x[i] - x[i - 1]));
            tmp -= y[i];
            if (tmp < 0) {
                left = mid, t = false;
                break;
            }
        }
        if (t) right = mid;
    }
    cout << right << endl;
}
