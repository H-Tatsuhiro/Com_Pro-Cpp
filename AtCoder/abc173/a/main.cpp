#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, cnt = 0; cin >> N;
    int M = N;
    while (N > 0) {
        N -= 1000;
        cnt++;
    }
    if (N % 1000 == 0) printf("%d\n", 0);
    else {
        printf("%d\n", 1000 * cnt - M);
    }
}
