#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        int x = a / 2;
        ans += min(x, b);
    }
    cout << ans << endl;
}
