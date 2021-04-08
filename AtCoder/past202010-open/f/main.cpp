#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<string> v(n, ""), s;
    vector<pair<int, string>> p;
    unordered_map<string, int> Map_tmp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (Map_tmp[v[i]]) Map_tmp[v[i]]++;
        else {
            Map_tmp[v[i]]++;
            s.push_back(v[i]);
        }
    }
    for (auto x : s) p.emplace_back(Map_tmp[x], x);
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    string ans = "";
    int it = 0;
    for (auto [x, y] : p) {
        if (it == k - 1) {
            if (it == 0) {
                if (p[it].first == p[it + 1].first) break;
            }
            else if (it == p.size() - 1) {
                if (p[it].first == p[it - 1].first) break;
            }
            else {
                if ((p[it].first == p[it + 1].first) || (p[it].first == p[it - 1].first)) break;
            }
            ans = y;
            break;
        }
        else it++;
    }
    if (ans == "") cout << "AMBIGUOUS" << endl;
    else cout << ans << endl;
}
