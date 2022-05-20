#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<string, pair<int, int>>> o;
    unordered_map<string, bool> Map;
    for (int i = 0; i < n; i++) {
        string s; int t; cin >> s >> t;
        if (!Map[s]) o.push_back(make_pair(s, make_pair(t, i + 1))), Map[s] = true;
    }
    int m = -1;
    for (int i = 0; i < o.size(); i++) m = max(m, o[i].second.first);
    for (int i = 0; i < o.size(); i++) {
        if (o[i].second.first == m) {
            cout << o[i].second.second << endl;
            return 0;
        }
    }
}
