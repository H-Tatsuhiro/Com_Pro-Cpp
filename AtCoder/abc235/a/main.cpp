#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string  a; cin >> a;
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        int x = a[i] - '0';
        ans += x + x * 10 + x * 100;
    }
    cout << ans << endl;
}
