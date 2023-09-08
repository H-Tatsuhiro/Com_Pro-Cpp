#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++) cin >> c[i];
    unordered_map<int, char> Map;
    vector<int> v(m, -1);
    vector<char> tmp(m, '.');
    for (int i = 0; i < n; i++) {
        if (v[c[i] - 1] == -1) v[c[i] - 1] = i, tmp[c[i] - 1] = s[i];
        else Map[i] = tmp[c[i] - 1], tmp[c[i] - 1] = s[i];
    }
    for (int i = 0; i < m; i++) Map[v[i]] = tmp[i];
    for (int i = 0; i < n; i++) cout << Map[i];
    cout << endl;
}


