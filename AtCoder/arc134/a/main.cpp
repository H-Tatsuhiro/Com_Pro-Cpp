#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, l, w; cin >> n >> l >> w;
    vector<long long int> a(n, 0), b;
    for (int i = 0; i < n; i++) cin >> a[i];
    if (a[n - 1] != l) a.push_back(l), n++;
    long long int cnt = 0, now = 0;
    for (int i = 0; i < n - 1; i++) {
        long long int d = a[i + 1] - a[i];
        if (d <= w) continue;
        else d -= w;
        long long int p = d / w, q = d % w;
        if (q != 0) cnt += p + 1;
        else cnt += p;
    }
    if (a[0] != 0) cnt += (a[0] / w) + (a[0] % w == 0 ? 0 : 1);
    cout << cnt << endl;
}
