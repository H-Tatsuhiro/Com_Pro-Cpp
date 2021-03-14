#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int ans = 0, now = 0;
    while(true) {
        if (now >= n) break;
        else {
            now += m;
            if (now >= n) break;
            else now++, ans++;
        }
    }
    cout << ans << endl;
}
