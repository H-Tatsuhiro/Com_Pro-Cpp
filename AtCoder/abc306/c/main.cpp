#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(3 * n, 0);
    for (int i = 0; i < 3 * n; i++) cin >> a[i];
    unordered_map<int, int> X, Y, Z;
    for (int i = 0; i < 3 * n; i++) {
        if (!X[a[i]]) X[a[i]] = i + 1;
        else if (!Y[a[i]]) Y[a[i]] = i + 1;
        else Z[a[i]] = i + 1;
    }
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) v.push_back(make_pair(Y[i], i));
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) cout << v[i].second << (i == v.size() - 1 ? '\n' : ' ');
}


