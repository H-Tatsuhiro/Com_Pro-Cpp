#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int, pair<int, pair<int, int>>>> v;
    for (int i = 0; i < n; i++) {
        v.push_back(make_pair(a[i] + b[i], make_pair(a[i], make_pair(b[i], -1 * (i + 1)))));
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++) cout << -1 * (v[i].second.second.second) << (i == n - 1 ? "\n" : " ");
}
