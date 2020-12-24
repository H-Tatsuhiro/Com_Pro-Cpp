#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<vector<long long int>> t(n, vector<long long int>(n, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    long long int ans = 0;
    vector<int> perm(n - 1, 0);
    for (int i = 1; i < n; i++) perm[i - 1] = i;
    do {
        long long int sum = 0;
        int prev = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += t[prev][perm[i]], prev = perm[i];
        }
        sum += t[prev][0];
        if (sum == k) ans++;
    } while (std::next_permutation(perm.begin(), perm.end()));
    cout << ans << endl;
}
