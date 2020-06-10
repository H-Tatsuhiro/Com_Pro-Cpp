#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned long long int ull;
ull min(ull x, ull y) {
    if (x <= y) return x;
    else return y;
    return 0;
}
int main() {
    ull N; cin >> N;
    ull ans = 18446744073709551615;
    for (ull i = 1; i <= 1000000; ++i) {
        if (N % i == 0) {
            ull tmp = 0;
            tmp = N / i;
            ans = min(ans, tmp + i);
        }
        if (i > N) break;
    }
    cout << ans - 2 << endl;
}
