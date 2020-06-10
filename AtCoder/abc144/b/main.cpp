#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            if (i * j == N) {
                printf("%s\n", "Yes");
                return 0;
            }
        }
    }
    printf("%s\n", "No");
    return 0;
}
