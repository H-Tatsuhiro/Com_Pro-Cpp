#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<pair<long long int, long long int>> v(n, make_pair(0, 0));
    long long int s = 0;
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second, s += v[i].second;
    sort(v.begin(), v.end());
    if (s <= k) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        s -= v[i].second;
        if (s <= k) {
            cout << v[i].first + 1 << endl;
            return 0;
        }
    }
    cout << v[n - 1].first + 1 << endl;
    return 0;
}


