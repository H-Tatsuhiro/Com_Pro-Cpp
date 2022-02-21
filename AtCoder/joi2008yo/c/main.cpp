#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b;
    unordered_map<int, bool> Map;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Map[a[i]] = true;
    }
    for (int i = 1; i <= 2 * n; i++) if (!Map[i]) b.push_back(i);
    sort(a.begin(), a.end());
    int now = -1;
    while(a.size() > 0 && b.size() > 0) {
        auto p = lower_bound(a.begin(), a.end(), now);
        if (p == a.end()) now = -1;
        else {
            now = *p;
            a.erase(p);
        }
        if (a.size() == 0) break;
        auto q = lower_bound(b.begin(), b.end(), now);
        if (q == b.end()) now = -1;
        else {
            now = *q;
            b.erase(q);
        }
    }
    cout << b.size() << endl << a.size() << endl;
}
