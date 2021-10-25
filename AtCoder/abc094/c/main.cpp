#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b;
    for (int i = 0; i < n; i++) cin >> a[i];
    b = a;
    unordered_map<int, int> Map;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) Map[a[i]] = (i < n / 2 ? a[n / 2] : a[n / 2 - 1]);
    for (int i = 0; i < n; i++) cout << Map[b[i]] << endl;
}
