#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, p; cin >> n >> m >> p;
    int ans = 0;
    for (int i = 1; i <= n; i++) if (i == m) ans++, m += p;
    cout << ans << endl;
}


