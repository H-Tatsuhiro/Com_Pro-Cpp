#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/modint>
using namespace atcoder;
using namespace std;
using mint = modint;
int main() {
    int n, p, q; cin >> n >> p >> q;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    for (int i = 0; i < n - 4; i++) {
        mint::set_mod(p);
        mint v = a[i];
        for (int j = i + 1; j < n - 3; j++) {
            mint w = v * a[j];
            for (int k = j + 1; k < n - 2; k++) {
                mint x = w * a[k];
                for (int l = k + 1; l < n - 1; l++) {
                    mint y = x * a[l];
                    for (int h = l + 1; h < n; h++) {
                        mint z = y * a[h];
                        if (z.val() == q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
