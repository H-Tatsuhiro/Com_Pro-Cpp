#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
void solve(vector<long long int> &v, string s, int m, int cnt, int a, int b, int c) {
    if (cnt < m) solve(v, s + '3', m, cnt + 1, a + 1, b, c), solve(v, s + '5', m, cnt + 1, a, b + 1, c), solve(v, s + '7', m, cnt + 1, a, b, c + 1);
    if (cnt >= 3 && a >= 1 && b >= 1 && c >= 1) v.push_back(boost::lexical_cast<int>(s));
}
int main() {
    long long int n; cin >> n;
    vector<long long int> v;
    int c = boost::lexical_cast<string>(n).length(), ans = 0;
    solve(v, "", c, 0, 0, 0, 0);
    for (auto x : v) if (x <= n) ans++;
    cout << ans << endl;
}
