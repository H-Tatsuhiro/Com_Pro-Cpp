#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    if (x <= n / 2) printf("%d\n", x - 1);
    else printf("%d\n", n - x);
}
