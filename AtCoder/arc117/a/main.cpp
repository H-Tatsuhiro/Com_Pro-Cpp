#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    vector<int> ans(a + b, 0);
    for (int i = 0; i < a; i++) ans[i] = i + 1;
    int x = -1, d = 0;
    for (int i = a; i < a + b; i++) ans[i] = x, x--;
    for (int i = min(a, b) + 1; i <= max(a, b); i++) d += i;
    if (a > b) ans[a + b - 1] -= d;
    else if (a < b) ans[0] += d;
    for (int i = 0; i < a + b; i++) {
        if (i == a + b - 1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
}

