#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        long long int a, b; cin >> a >> b;
        ans += max(a, b);
    }
    cout << ans << endl;
}
