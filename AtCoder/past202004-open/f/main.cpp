#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, ans = 0; cin >> n;
    vector<pair<int, int>> p(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    sort(p.begin(), p.end());
    priority_queue<int> que;
    int now = 1, it = 0;
    for (int i = 0; i < n; i++) {
        if (it != n) {
            while(true) {
                if (p[it].first > now) break;
                que.push(p[it].second);
                it++;
                if (it == n) break;
            }
        }
        now++;
        ans += que.top(), que.pop();
        cout << ans << endl;
    }
}
