#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, A, B, C, D; cin >> N >> A >> B >> C >> D;
    int a, b, c, d; a = b = c = d = 0;
    while (a < N) {
        a += A, c += B;
    }
    while (b < N) {
        b += C, d += D;
    }
    cout << min(c, d) << endl;
}
