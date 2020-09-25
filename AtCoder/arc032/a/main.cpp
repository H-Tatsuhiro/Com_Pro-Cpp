#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int sum = 0;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    if (sum == 1) {
        cout << "BOWWOW" << endl;
        return 0;
    }
    for (int i = 2; i <= sqrt(sum); i++) {
        if (sum % i == 0) {
            cout << "BOWWOW" << endl;
            return 0;
        }
    }
    cout << "WANWAN" << endl;
    return 0;
}
