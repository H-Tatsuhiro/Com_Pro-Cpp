#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int ans = 0;
    for (int i = 1; i <= 100; i++) if (!(i % 3 == 0 || i % 5 == 0)) ans += i;
    cout << ans << endl;
}
