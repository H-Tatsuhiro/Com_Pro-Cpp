#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, ans = 0, a; cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ans += a - (i % 2 != 0 ? 1 : 0);
    }
    cout << (x < ans ? "No" : "Yes") << endl;
}
