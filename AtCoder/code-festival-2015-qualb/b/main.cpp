#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; Map[a]++;
    }
    int ans = -1;
    for (int i = 0; i <= m; i++) if (Map[i] > (n / 2)) ans = i;
     if (ans == -1) cout << '?' << endl;
     else cout << ans << endl;
}
