#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b;
    long long int ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    b.push_back(0);
    for (int i = 0; i < n; i++) b.push_back(a[i]);
    b.push_back(0);
    for (int i = 0; i < b.size() - 1; i++) ans += abs(b[i + 1] - b[i]);
    for (int i = 1; i < b.size() - 1; i++) cout << ans - abs(b[i] - b[i - 1]) - abs(b[i] - b[i + 1]) + abs(b[i + 1] - b[i - 1]) << endl;
}
