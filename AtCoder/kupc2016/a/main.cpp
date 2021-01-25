#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b, ans = 0; cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (!(a <= x && x < b)) ans++;
    }
    cout << ans << endl;
}
