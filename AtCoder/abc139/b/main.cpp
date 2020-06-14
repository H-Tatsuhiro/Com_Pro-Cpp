#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B; cin >> A >> B;
    int now = 1, i = 0;
    while(now < B) {
        i++; now--; now += A;
    }
    printf("%d\n", i);
}
