#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> a;
    set<int> S;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        a.push_back(vector<int>{x, y, i});
    }
    for (int i = 0; i < 2; i++) {
        sort(a.begin(), a.end());
        for (int j = 0; j < 2; j++) {
            S.insert(a[j][2]);
            S.insert(a[n - 1 - j][2]);
        }
        for (auto &v: a) swap(v[0], v[1]);
    }
    vector<pair<int, int>> b;
    for (auto v: a) if (S.count(v[2])) b.push_back(pair<int, int>{v[0], v[1]});
    vector<long long int> d;
    for (int i = 0; i < b.size() - 1; i++) for (int j = i + 1; j < b.size(); j++) d.push_back(max(abs(b[i].first - b[j].first), abs(b[i].second - b[j].second)));
    sort(d.begin(), d.end());
    cout << d[d.size() - 2] << endl;

}