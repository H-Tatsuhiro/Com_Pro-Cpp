#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int b; cin >> b;
    for (long long int i = 1; i <= 1000; i++) {
        long long int a = 1;
        for (int j = 0; j < i; j++) a *= i;
        if (a == b) {
            cout << i << endl;
            return 0;
        }
        if (a > b) break;
    }
    cout << -1 << endl;
    return 0;
}


