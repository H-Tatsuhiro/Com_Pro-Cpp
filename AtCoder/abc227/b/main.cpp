#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    int ans = 0;
    unordered_map<int, bool> Map;
    for (int i = 1; i <= 1000; i++) for (int j = 1; j <= 1000; j++) Map[(4 * i * j + 3 * i + 3 * j)] = true;
    for (int i = 0; i < n; i++) {
        int s; cin >> s;
        if (!Map[s]) ans++;
    }
    cout << ans << endl;
}
