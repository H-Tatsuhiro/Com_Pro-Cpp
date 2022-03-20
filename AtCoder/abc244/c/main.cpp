#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<int, bool> Map;
    vector<int> a;
    for (int i = 2; i <= 2 * n + 1; i++) a.push_back(i);
    cout << 1 << endl;
    while(true) {
        int m; cin >> m;
        if (m == 0) break;
        else {
            Map[m] = true;
            auto it = lower_bound(a.begin(), a.end(), m);
            a.erase(it);
            auto x = lower_bound(a.begin(), a.end(), 0);
            cout << *x << endl;
            a.erase(x);
        }
    }
}
