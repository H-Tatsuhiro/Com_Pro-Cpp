#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i], a[i]--;
    int now = 0, p = -1;
    unordered_map<int, bool> Map;
    vector<int> ans;
    bool t = false;
    while (true) {
        now = a[now];
        if (t) {
            if (now == p) break;
            ans.push_back(now);
        }
        else {
            if (Map[now]) t = true, p = now, ans.push_back(now);
            else Map[now] = true;
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] + 1 << (i == ans.size() - 1 ? '\n' : ' ');
}


