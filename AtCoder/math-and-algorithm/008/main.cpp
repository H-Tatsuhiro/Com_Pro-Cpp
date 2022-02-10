#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, s, ans = 0; cin >> n >> s;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) if (s >= i + j) ans++;
    cout << ans << endl;
}
