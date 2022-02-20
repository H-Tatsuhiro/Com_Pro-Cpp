#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool is_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) if (x % i == 0) return false;
    return true;
}
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    bool t = false;
    for (int i = a; i <= b; i++) {
        bool x = true;
        for (int j = c; j <= d; j++) if (is_prime(i + j)) x = false;
        if (x) t = true;
    }
    cout << (t ? "Takahashi" : "Aoki") << endl;
}
