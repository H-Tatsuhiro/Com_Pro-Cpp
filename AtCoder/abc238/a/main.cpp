#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int a = n * n;
    long long int b = 1;
    for (int i = 1; i <= n; i++) {
        b *= 2;
        if (b > a) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
