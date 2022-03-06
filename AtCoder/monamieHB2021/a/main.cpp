#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = 100;
    for (long long int i = 0; i < 26; i++) {
        for (long long int j = 0; j < 26; j++) {
            long long int c = n - 8 * i - 10 * j;
            if (c % 26 == 0) ans = min(ans, i + j);
        }
    }
    cout << ans << endl;
}
