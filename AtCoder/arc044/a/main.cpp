#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    if (n == 1) {
        cout << "Not Prime" << endl;
        return 0;
    }
    bool t = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            t = false;
            break;
        }
    }
    if (t) {
        cout << "Prime" << endl;
        return 0;
    }
    if ((n % 10) != 5 && (n % 10) % 2 != 0) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10, n /= 10;
        }
        if (sum % 3 != 0) {
            cout << "Prime" << endl;
            return 0;
        }
    }
    cout << "Not Prime" << endl;
    return 0;
}
