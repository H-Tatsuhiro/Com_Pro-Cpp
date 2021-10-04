#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    for (int i = 0; i <= 60; i++) {
        long long int p = pow(2, i);
        if (p > n) {
            cout << i - 1 << endl;
            break;
        }
    }
}
