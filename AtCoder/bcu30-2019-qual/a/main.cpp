#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, p; cin >> n >> p;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (p >= a) ans++, p -= a;
        else break;
    }
    cout << ans << endl;
}
