#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), ans(n, 0);
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    set<int> S;
    for (int i = 0; i < n; i++) S.insert(b[i]), Map[b[i]] = S.size() - 1;
    for (int i = 0; i < n; i++) cout << Map[a[i]] << endl;
}
