#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    unsigned long long int n; cin >> n;
    for (int i = 0; i < 65; i++) {
        for (int j = 0; j < 65; j++) {
            unsigned long long int x = pow(2, i), y = pow(3, j);
            if (n == x * y) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}


