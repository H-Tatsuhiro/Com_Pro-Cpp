#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/modint>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;
int main() {
    long long int n, k; cin >> n >> k;
    if (n == 1) cout << k << endl;
    else {
        mint ans = 1;
        ans *= k, ans *= k - 1, ans *= mint(k - 2).pow(n - 2);
        cout << ans.val() << endl;
    }
}
