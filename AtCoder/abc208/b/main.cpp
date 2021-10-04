#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int p, ans = 0, q = 3628800; cin >> p;
    for (int i = 10; i >= 1; i--) ans += p / q, p %= q, q /= i;
    cout << ans << endl;
}
