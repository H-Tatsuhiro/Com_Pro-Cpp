#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> p(n, 0),q(k, 0);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (i < k) q[i] = p[i];
    }
    sort(q.begin(), q.end(), greater<int>());
    int m = q[k - 1];
    set<int> S;
    for (int i = 0; i < k; i++) S.insert(q[i]);
    S.insert(m);
    cout << m << endl;
    for (int i = k + 1; i <= n; i++) {
        S.insert(p[i - 1]);
        if (p[i - 1] > m) m = *(S.upper_bound(m));
        cout << m << endl;
    }
}
