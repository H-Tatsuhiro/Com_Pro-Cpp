#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int sum = 0;
    for (long long int i = n - 1; i >= 1; i--) {
        sum += i;
    }
    cout << sum << endl;
}
