#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    unordered_map<long long int, long long int> Map;
    for (int i = 0; i < n; i++) Map[a[i]]++;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0) {
                if (a[i] / j == j) ans += Map[j] * Map[j];
                else ans += Map[j] * Map[a[i] / j], ans += Map[a[i] / j] * Map[j];
            }
        }
    }
    cout << ans << endl;
}
