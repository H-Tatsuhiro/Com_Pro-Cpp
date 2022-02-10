#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int s, a, b; cin >> s >> a >> b;
    int ans = 250, now = a;
    while (now < s) {
        ans += 100;
        now += b;
    }
    cout << ans << endl;
}
