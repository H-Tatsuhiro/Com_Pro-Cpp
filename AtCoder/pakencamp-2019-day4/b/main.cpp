#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    unsigned long long int ans = 1, bef = 1;
    for (int i = 1; i <= n; i++) ans += (bef * 5), bef *= 5;
    cout << ans << endl;
}
