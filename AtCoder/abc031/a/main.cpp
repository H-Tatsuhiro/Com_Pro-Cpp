#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, D; cin >> A >> D;
    if (A <= D) printf("%d\n", D * (A + 1));
    else printf("%d\n", A * (D + 1));
}
