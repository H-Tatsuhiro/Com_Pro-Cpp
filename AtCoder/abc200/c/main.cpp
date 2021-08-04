#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> b(201, 0);
    for (int i = 0; i < n; i++) {
        int a; cin >> a; b[a % 200]++;
    }
    long long int ans = 0;
    for (int i = 0; i < 200; i++) ans += (b[i] * (b[i] - 1)) / 2;
    cout << ans << endl;
}
