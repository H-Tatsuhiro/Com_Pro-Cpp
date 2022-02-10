#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(4 * n - 1, 0);
    for (int i = 0; i < 4 * n - 1; i++) cin >> a[i];
    unordered_map<int, int> Map;
    for (int i = 0; i < 4 * n - 1; i++) Map[a[i]]++;
    for (int i = 1; i <= n; i++) if (Map[i] == 3) cout << i << endl;
}
