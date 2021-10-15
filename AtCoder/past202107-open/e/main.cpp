#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, p = 3; cin >> n;
    for (int i = 0; i < 30; i++) {
        long long int a = p;
        long long int b = a + 1;
        for (int j = i; j < 29; j++) b *= 3;
        if (b == n) {
            cout << i + 1 << endl;
            return 0;
        }
        else p *= 3;
    }
    cout << -1 << endl;
    return 0;
}
