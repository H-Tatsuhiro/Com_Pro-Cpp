#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i <= 21; i++) for (int j = 0; j <= 21; j++) for (int k = 0; k <= 21; k++) if (i + j + k <= n) v.emplace_back(make_pair(i, make_pair(j, k)));
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
}


