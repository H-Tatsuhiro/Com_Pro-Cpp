#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k, s; cin >> n >> k >> s;
    vector<long long int> ans(n, 0);
    long long int c = s + 1;
    if (s == 1000000000) c = 1;
    for (int i = 0; i < k; i++) ans[i] = s;
    for (int i = k; i < n; i++) ans[i] = c;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
}
