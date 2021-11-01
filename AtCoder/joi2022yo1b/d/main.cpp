#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<pair<int, int>> ans;
    for (int i = 1; i <= 2000; i++) {
        int tmp = 0;
        for (int j = 0; j < n; j++) if (i == a[j]) tmp++;
        if (tmp != 0) ans.push_back(make_pair(tmp, i));
    }
    sort(ans.begin(), ans.end());
    cout << ans[0].second << endl;
}
