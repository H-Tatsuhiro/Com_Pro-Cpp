#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> cnt(4, 0);
    for (int i = 0; i < n; i++) {
        int a; cin >> a, cnt[a / 100 - 1]++;
    }
    long long int ans = cnt[0] * cnt[3] + cnt[1] * cnt[2];
    cout << ans << endl;
}