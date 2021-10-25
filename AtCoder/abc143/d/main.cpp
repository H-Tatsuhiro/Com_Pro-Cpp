#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    vector<int> cnt(2000, 0);
    for (int i = 0; i < n; i++) cnt[a[i]]++;
    for (int i = 1; i < 2000; i++) cnt[i] += cnt[i - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int x = max(a[i] - a[j], a[j] - a[i]), y = a[i] + a[j];
            int c = 0;
            if (0 <= y - 1) c = cnt[y - 1];
            c -= cnt[x];
            if (x < a[i] && a[i] < y) c--;
            if (x < a[j] && a[j] < y) c--;
            ans += c;
        }
    }
    ans /= 6;
    cout << ans << endl;
}
