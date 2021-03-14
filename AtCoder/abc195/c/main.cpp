#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, ans = 0; cin >> n;
    vector<pair<long long int, long long int>> v;
    v.push_back(make_pair(1, 999));
    v.push_back(make_pair(1000, 999999));
    v.push_back(make_pair(1000000, 999999999));
    v.push_back(make_pair(1000000000, 999999999999));
    v.push_back(make_pair(1000000000000, 999999999999999));
    v.push_back(make_pair(1000000000000000, 1000000000000001));
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first <= n && v[i].second <= n) ans += (v[i].second - v[i].first + 1) * i;
        else if (v[i].first <= n && v[i].second > n) ans += (n - v[i].first + 1) * i;
        else break;
    }
    cout << ans << endl;
}
