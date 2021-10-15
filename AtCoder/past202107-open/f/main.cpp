#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < n; i++) {
        pair<int, pair<int, int>> p = make_pair(-1, make_pair(-1, -1));
        cin >> p.first >> p.second.first >> p.second.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    bool ended = false;
    v.push_back(make_pair(-1, make_pair(-1, -1)));
    int prev = v[0].first;
    queue<int> que;
    for (int i = 0; i < n + 1; i++) {
        if (v[i].first == prev) que.push(i);
        else {
            vector<int> c(25, 0);
            while(!que.empty()) {
                int l = que.front(); que.pop();
                pair<int, int> a = v[l].second;
                for (int j = a.first + 1; j <= a.second; j++) c[j]++;
            }
            for (int j = 0; j < 25; j++) if (c[j] > 1) ended = true;
            if (v[i].first != -1) prev = v[i].first, que.push(i);
        }
    }
    if (ended) cout << "Yes" << endl;
    else cout << "No" << endl;
}
