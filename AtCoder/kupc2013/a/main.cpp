#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<pair<int, string>> p(n + 1);
    p[0].first = 1, p[0].second = "kogakubu10gokan";
    for (int i = 1; i <= n; i++) cin >> p[i].first >> p[i].second;
    for (int i = 0; i < n; i++) {
        if (p[i].first <= q && q < p[i + 1].first) {
            cout << p[i].second << endl;
            return 0;
        }
    }
    cout << p[n].second << endl;
    return 0;
}
