#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, k, l, cnt = 0; cin >> a >> b >> k >> l;
    long long int ans = 0;
    if (a * l > b) {
        cnt = (k / l) * l, ans += (cnt / l) * b;
        if (k - cnt > 0) ans += min((k - cnt) * a, b);
    }
    else ans += k * a;
    cout << ans << endl;
}
