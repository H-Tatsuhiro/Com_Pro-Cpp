#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    n *= 2;
    long long int ans = -1;
    for (long long int i = sqrt(n); i >= 1; i--) {
        if (i * i + i == n) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
