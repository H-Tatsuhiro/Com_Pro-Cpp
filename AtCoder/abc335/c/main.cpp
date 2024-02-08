#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) v.push_back(make_pair(i + 1, 0));
    reverse(v.begin(), v.end());
    pair<int, int> r = make_pair(1, 0);
    for (int i = 0; i < q; i++) {
        int c; cin >> c;
        if (c == 1) {
            char p; cin >> p;
            if (p == 'R') r.first++;
            if (p == 'L') r.first--;
            if (p == 'D') r.second--;
            if (p == 'U') r.second++;
            v.push_back(r);
        }
        else {
            int p; cin >> p;
            cout << v[v.size() - p].first << " " << v[v.size() - p].second << endl;
        }
    }
}


