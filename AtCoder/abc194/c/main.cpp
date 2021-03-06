#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    long long int n, ans = 0; cin >> n;
    vector<long long int> a(n, 0);
    unordered_map<long long int, long long int> Map;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Map[a[i]]++;
    }
    for (int i = -200; i <= 200; i++) {
        for (int j = i + 1; j <= 200; j++) {
            ans += Map[i] * Map[j] * (abs(i - j) * abs(i - j));
        }
    }
    cout << ans << endl;
}
