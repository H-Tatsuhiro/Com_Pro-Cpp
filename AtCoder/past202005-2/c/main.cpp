// Could solve
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long int A, R, N; cin >> A >> R >> N;
    if ((__int128)(A * pow(R,N - 1)) > 1000000000) printf("%s\n", "large");
    else {
        long long int ans = A * pow(R, N - 1);
        printf("%lld\n", ans);
    }
}
