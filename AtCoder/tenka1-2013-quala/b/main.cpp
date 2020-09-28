#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n; int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        if (a + b + c + d + e < 20) cnt++;
    }
    cout << cnt << endl;
}
