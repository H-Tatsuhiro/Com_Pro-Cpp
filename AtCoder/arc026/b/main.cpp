#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) sum += i;
            else sum += i + (n / i);
        }
    }
    sum -= n;
    if (sum == n) cout << "Perfect" << endl;
    else if (sum < n) cout << "Deficient" << endl;
    else cout << "Abundant" << endl;
}
