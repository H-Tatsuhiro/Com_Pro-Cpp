#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> h(n, 0), s(n, 0);
    for (int i = 0; i < n; i++) cin >> h[i] >> s[i];
    long long int left = 0, right = 1LL << 60;
    while (right - left > 1) {
        long long int mid = left + (right - left) / 2;
        bool tf = true;
        vector<long long int> t(n, 0);
        for (int i = 0; i < n; i++) {
            if (mid < h[i]) tf = false;
            else t[i] = (mid - h[i]) / s[i];
        }
        sort(t.begin(), t.end());
        for (int i = 0; i < n; i++) if (t[i] < i) tf = false;
        if (tf) right = mid;
        else left = mid;
    }
    cout << right << endl;
}
