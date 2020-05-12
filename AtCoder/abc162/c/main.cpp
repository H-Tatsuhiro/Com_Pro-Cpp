#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if(a < b) {
        return gcd(b, a);
    }
    unsigned long long r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}

int main() {
    int K;
    cin >> K;
    long long ans = 0;
    for (int i = 1; i <= K ; ++i) {
        for (int j = 1; j <= K ; ++j) {
            for (int k = 1; k <= K; ++k) {
                ans += gcd(gcd(i, j), k);
            }
        }
    }
    cout << ans << endl;
}
