#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <set>
using namespace std;
int main() {
    int na, nb, s = 0; cin >> na >> nb;
    vector<int> a(na, 0), b(nb, 0);
    set<int> S;
    unordered_map<int, bool> Map;
    for (int i = 0; i < na; i++) cin >> a[i], Map[a[i]] = true, S.insert(a[i]);
    for (int i = 0; i < nb; i++) cin >> b[i], S.insert(b[i]), s += (Map[b[i]] ? 1 : 0);
    long double ans = (s * 1.0) / (S.size() * 1.0);
    cout << fixed << setprecision(14) << ans << endl;
}
