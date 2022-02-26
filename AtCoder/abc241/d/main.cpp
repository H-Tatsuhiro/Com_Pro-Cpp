#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int q; cin >> q;
    multiset<long long int> s;
    for (int i = 0; i < q; i++) {
        int c; cin >> c;
        if (c == 1) {
            long long int x; cin >> x;
            s.insert(x);
        }
        else if (c == 2) {
            long long int x, k; cin >> x >> k;
            auto p = s.upper_bound(x);
            bool t = false;
            for (int j = 0; j < k; j++) {
                if (p == s.begin()) {
                    t = true;
                    break;
                }
                p--;
            }
            if (t) cout << -1 << endl;
            else cout << *p << endl;
        }
        else {
            long long int x, k; cin >> x >> k;
            auto p = s.lower_bound(x);
            bool t = false;
            for (int j = 0; j < k - 1; j++) {
                if (p == s.end()) {
                    t = true;
                    break;
                }
                p++;
            }
            if (p == s.end() || t) cout << -1 << endl;
            else cout << *p << endl;
        }
    }
}
