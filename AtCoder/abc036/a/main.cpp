#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B; cin >> A >> B;
    int sum = 0, cnt = 0;
    while (sum < B) {
        sum += A, cnt++;
    }
    printf("%d\n", cnt);
}
