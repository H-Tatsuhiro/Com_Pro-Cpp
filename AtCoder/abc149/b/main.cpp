#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int A, B, K; cin >> A >> B >> K;
    if (A >= K && A >= 1) {
        A -= K;
        printf("%lld %lld", A, B);
    }
    else {
        K -= A;
        if (B >= K && B >= 1) {
            B -= K;
            printf("%lld %lld", 0, B);
        }
        else {
            printf("%lld %lld", 0, 0);
        }
    }
}
