#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, ans = 1000000000000000001, i = 0, j = 1000000; cin >> n;
    while (i <= j) {
        long long int x = (i + j) * (i * i + j * j);
        if (x >= n) ans = min(ans, x), j--;
        else i++;
    }
    cout << ans << endl;
}
