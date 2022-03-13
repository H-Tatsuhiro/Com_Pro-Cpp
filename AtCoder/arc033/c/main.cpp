#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
int main() {
    tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> t;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int c, x; cin >> c >> x;
        if (c == 1) t.insert(x);
        else {
            auto it = t.find_by_order(x - 1);
            cout << *it << endl;
            t.erase(*it);
        }
    }
}
