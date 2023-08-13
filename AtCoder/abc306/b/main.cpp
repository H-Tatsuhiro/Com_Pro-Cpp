#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    unsigned long long int ans = 0, p = 1;
    for (int i = 0; i < 64; i++) {
        unsigned long long int a; cin >> a;
        if (i > 0) p *= 2;
        ans += a * p;
    }
    cout << ans << endl;
}


