#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<bool> t(n + 1, false);
    while(!t[x]) {
        t[x] = true;
        x = a[x];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) cnt += (t[i] ? 1 : 0);
    cout << cnt << endl;
}
