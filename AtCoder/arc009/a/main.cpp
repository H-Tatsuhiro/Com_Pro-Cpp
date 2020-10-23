#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long double ans = 0.0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        ans += a * (b * 1.05);
    }
    cout << (int)ans << endl;
}
