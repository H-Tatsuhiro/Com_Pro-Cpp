#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> a(N, 0);
    int ma = 0; cin >> ma; int mi = ma; a[0] = ma;
    for (int i = 1; i < N; i++) {
        int n; cin >> n;
        ma = max(ma, n), mi = min(mi, n);
        a[i] = n;
    }
    long long int ans = 0;
    for (int i = mi; i <= ma; i++) {
        long long int tmp = 0;
        for (int j = 0; j < N; j++) tmp += pow(a[j] - i, 2);
        if (ans == 0) ans = tmp;
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}
