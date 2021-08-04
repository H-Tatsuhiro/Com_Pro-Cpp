#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> Map;
    bool t = false;
    for (int i = 0; i < n; i++) Map[a[i]]++;
    for (int i = 1; i <= n; i++) if (Map[i] != 1) t = true;
    if (!t) cout << "Yes" << endl;
    else cout << "No" << endl;
}
