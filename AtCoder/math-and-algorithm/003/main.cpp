#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        ans += a;
    }
    cout << ans << endl;
}
