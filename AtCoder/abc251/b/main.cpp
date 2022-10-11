#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, w; cin >> n >> w;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    set<int> S;
    for (int i = 0; i < n - 2; i++) for (int j = i + 1; j < n - 1; j++) for (int k = j + 1; k < n; k++) if (a[i] + a[j] + a[k] <= w) S.insert(a[i] + a[j] + a[k]);
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) if (a[i] + a[j] <= w) S.insert(a[i] + a[j]);
    for (int i = 0; i < n; i++) if (a[i] <= w) S.insert(a[i]);
    cout << S.size() << endl;
}
