#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    vector<int> a(n, 0), cnt(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cnt[a[i] - 1]++;
    int ans = 0, k_cnt = 0;
    sort(cnt.begin(), cnt.end());
    reverse(cnt.begin(), cnt.end());
    for (auto x : cnt) {
        if (k_cnt < k) k_cnt++;
        else ans += x;
    }
    cout << ans << endl;
}




