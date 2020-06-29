#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B, C; cin >> A >> B >> C;
    printf("%d\n", (A * B + B * C + C * A) * 2);
}
