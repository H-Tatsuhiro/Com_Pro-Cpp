#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        long long int a, b; cin >> a >> b;
        a--;
        sum += (1 + b) * b / 2;
        sum -= (1 + a) * a / 2;
    }
    cout << sum << endl;
}
