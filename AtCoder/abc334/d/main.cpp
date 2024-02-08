#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<int> r(n, 0);
    for (int i = 0; i < n; i++) cin >> r[i];
    sort(r.begin(), r.end());
    vector<long long int> s(n, 0);
    s[0] = r[0];
    for (int i = 1; i < n; i++) s[i] = s[i - 1] + r[i];
    for (int i = 0; i < q; i++) {
        long long int x; cin >> x;
        auto it = upper_bound(s.begin(), s.end(), x);
        auto d = distance(s.begin(), it);
        cout << d << endl;
    }
}


