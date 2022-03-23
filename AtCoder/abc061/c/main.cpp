#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<long long int> v(100001, 0), w(100001, 0);
    for (int i = 0; i < n; i++) {
        long long int a, b; cin >> a >> b, v[a] += b;
    }
    for (int i = 1; i < 100001; i++) w[i] = w[i - 1] + v[i];
    auto it = lower_bound(w.begin(), w.end(), k) - w.begin();
    cout << it << endl;
}
