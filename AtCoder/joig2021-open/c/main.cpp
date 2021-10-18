#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    vector<vector<int>> count(n, vector<int>(4, 0));
    int cnt = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) tmp++;
    }
    int ans = tmp;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) cnt++;
        else tmp--;
        int t = cnt + tmp;
        ans = min(t, ans);
    }
    cout << ans << endl;
}
