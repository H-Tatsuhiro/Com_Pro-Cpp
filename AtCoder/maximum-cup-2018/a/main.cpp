#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c; cin >> a >> b >> c;
        if (b - a >= 10) ans += c;
    }
    cout << ans << endl;
}
