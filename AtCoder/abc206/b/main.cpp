#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int sum = 0;
    for (int i = 1; i <= 1000000000; i++) {
        sum += i;
        if (sum >= n) {
            cout << i << endl;
            break;
        }
    }
}
