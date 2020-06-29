#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B, C, K, S, T; cin >> A >> B >> C >> K >> S >> T;
    int sum = A * S + T * B;
    if (S + T >= K) printf("%d\n", sum - (S + T) * C);
    else printf("%d\n", sum);
}
