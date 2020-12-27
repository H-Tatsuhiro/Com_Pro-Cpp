#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    pair<long long int, long long int> ans = make_pair(0, -1);
    for (int i = 0; i < n; i++) if (a[i] < k && ans.first < a[i]) ans.first = a[i], ans.second = i + 1;
    cout << ans.second << endl;
}
