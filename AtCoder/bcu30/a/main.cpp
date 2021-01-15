#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    int now = 0;
    for (int i = 0; i < k; i++) {
        int a; cin >> a;
        if (now + a < n) now += a;
        else if (now + a > n) now = n - ((now + a) - n);
        else {
            now = n;
            break;
        }
    }
    cout << now << endl;
}
