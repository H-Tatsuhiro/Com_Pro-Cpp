#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int l, q; cin >> l >> q;
    set<int> S;
    S.insert(0);
    S.insert(l);
    for (int i = 0; i < q; i++) {
        int c, x; cin >> c >> x;
        if (c == 1) S.insert(x);
        else {
            auto itr = S.lower_bound(x);
            int v = *itr;
            itr--;
            int w = *itr;
            cout << v - w << endl;
        }
    }
}
