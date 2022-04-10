#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main() {
    int q; cin >> q;
    deque<pair<long long int, long long int>> que;
    for (int i = 0; i < q; i++) {
        int c; cin >> c;
        if (c == 1) {
            long long int x, y; cin >> x >> y;
            que.push_back(make_pair(x, y));
        }
        else {
            long long int x; cin >> x;
            long long int ans = 0;
            long long int y = 0;
            while(x > y) {
                auto p = que.front();
                que.pop_front();
                long long int m = p.second, z = 0;
                if (m + y > x) z = y + m - x, m = x - y, y = x;
                else y += m;
                ans += p.first * m;
                if (z > 0) que.push_front(make_pair(p.first, z));
            }
            cout << ans << endl;
        }
    }
}
