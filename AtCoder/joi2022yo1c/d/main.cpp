#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    unordered_map<int, int> Map;
    for (int i = 1; i <= n; i++) Map[i] = i;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        Map[x] = y;
    }
    for (int i = 1; i <= n; i++) cout << Map[i] << endl;
}
