#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<long long int, int> Map;
    int j = 1;
    for (int i = 0; i < n; i++) {
        if (Map[a[i]] == 0) Map[a[i]] = j, j++;
    }
    vector<vector<int>> v(j + 100);
    for (int i = 0; i < n; i++) {
        v[Map[a[i]]].push_back(i + 1);
    }
    unordered_map<long long int, int> cnt;
    for (int i = 0; i < n; i++) cnt[Map[a[i]]]++;
    for (int i = 0; i < q; i++) {
        long long int x, k; cin >> x >> k;
        if (cnt[Map[x]] == 0) cout << -1 << endl;
        else {
            if (k > cnt[Map[x]]) cout << -1 << endl;
            else cout << v[Map[x]][k - 1] << endl;
        }
    }
}
