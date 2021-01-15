#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> ans(n, 0);
    for (int i = 0; i < 5; i++) {
        int a; cin >> a;
        if (i == 0) ans[a - 1] += 100000;
        else if (i == 1) ans[a - 1] += 50000;
        else if (i == 2) ans[a - 1] += 30000;
        else if (i == 3) ans[a - 1] += 20000;
        else ans[a - 1] += 10000;
    }
    for (auto x : ans) cout << x << endl;
}
