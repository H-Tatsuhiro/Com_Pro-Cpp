#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<pair<long long int, long long int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    cpp_int sum = 0;
    long long int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (cnt + v[i].second > m) {
            sum += (m - cnt) * v[i].first;
            break;
        }
        else sum += v[i].second * v[i].first, cnt += v[i].second;
    }
    cout << sum << endl;

}
