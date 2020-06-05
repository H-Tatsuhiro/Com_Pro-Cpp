#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int H, N; cin >> H >> N;
    unsigned long long int sum = 0;
    for (int i = 0; i < N; ++i) {
        int a = 0; cin >> a;
        sum += a;
    }
    if (sum >= H) printf("%s\n", "Yes");
    else printf("%s\n", "No");
}
