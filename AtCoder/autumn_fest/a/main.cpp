#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, t; cin >> n >> t;
    vector<int> p(n, 0), now(n, 0);
    for (int i = 0; i < n; i++) cin >> p[i];
    vector<vector<int>> score(n), time(n);
    for (int i = 0; i < n; i++) {
        score[i].resize(p[i]);
        time[i].resize(p[i]);
        for (int j = 0; j < p[i]; j++) {
            cin >> score[i][j];
        }
    }
    for (int i = 0; i < n; i++) for (int j = 0; j < p[i]; j++) cin >> time[i][j];
    int ans = 0, ans_t = 0;
    vector<pair<int, int>> solve(n, make_pair(0, 0));
    bool q = true;
    while(q) {
        for (int i = 0; i < n; i++) {
            solve[i].second = i;
            if (now[i] == p[i]) solve[i].first = 55555;
            else solve[i].first = score[i][now[i]];
        }
        sort(solve.begin(), solve.end());
        for (int i = 0; i < n; i++) {
            if (ans_t + time[solve[i].second][now[solve[i].second]] <= t && solve[i].first != 55555) {
                ans += solve[i].first, ans_t += time[solve[i].second][now[solve[i].second]];
                if (now[solve[i].second] > 0) ans -= score[solve[i].second][now[solve[i].second] - 1];
                now[solve[i].second]++;
                break;
            }
            else {
                q =  false;
                break;
            }
        }
    }
    cout << ans << endl;
}
