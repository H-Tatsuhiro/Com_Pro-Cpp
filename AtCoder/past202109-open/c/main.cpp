#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, ans = 0; cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == x) ans++;
    }
    cout << ans << endl;
}
