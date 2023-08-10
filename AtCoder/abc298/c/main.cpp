#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<priority_queue<int, vector<int>, greater<int>>> b(n);
    vector<priority_queue<int, vector<int>, greater<int>>> c(1000000);
    vector<unordered_map<int, bool>> vMap(1000000);
    for (int i = 0; i < q; i++) {
        int t; cin >> t;
        if (t == 1) {
            int x, y; cin >> x >> y;
            b[y - 1].push(x);
            if (!vMap[x - 1][y]) {
                c[x - 1].push(y);
                vMap[x - 1][y] = true;
            }
        }
        else if (t == 2) {
            int x; cin >> x;
            priority_queue<int, vector<int>, greater<int>> que = b[x - 1];
            while (!que.empty()) {
                cout << que.top() << ' ';
                que.pop();
            }
            cout << endl;
        }
        else {
            int x; cin >> x;
            priority_queue<int, vector<int>, greater<int>> que = c[x - 1];
            while (!que.empty()) {
                cout << que.top() << ' ';
                que.pop();
            }
            cout << endl;
        }
    }
}


