#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> x(n, 0);
    unordered_map<int, int> Map, M;
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) M[x[i]] = i + 1;
    vector<int> ans, y = x;
    sort(y.begin(), y.end());
    for (int i = n - 1; i >= k - 1; i--) ans.push_back(M[y[k - 1]]), y.erase(lower_bound(y.begin(), y.end(), x[i]));
    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << endl;
}
