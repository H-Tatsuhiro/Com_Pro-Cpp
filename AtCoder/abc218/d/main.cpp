#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    long long int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                if (binary_search(v.begin(), v.end(), make_pair(v[i].first, v[j].second)) && binary_search(v.begin(), v.end(), make_pair(v[j].first, v[i].second))) ans++;
            }
        }
    }
    cout << ans << endl;
}
