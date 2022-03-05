#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    deque<int> que;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        que.push_back(a);
    }
    for (int i = 0; i < q; i++) {
        int t, x, y; cin >> t >> x >> y;
        if (t == 1) {
            int m = que[x - 1];
            que[x - 1] = que[y - 1], que[y - 1] = m;
        }
        else if (t == 2) {
            int p = que[n - 1];
            que.pop_back(), que.push_front(p);
        }
        else cout << que[x - 1] << endl;
    }
}
