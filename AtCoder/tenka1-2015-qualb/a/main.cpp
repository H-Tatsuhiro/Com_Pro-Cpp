#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int fib() {
    vector<int> a = {1, 1, 2};
    for (int i = 3; i < 20; i++) {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    return a[19];
}
int main() {
    cout << fib() * 100 << endl;
}
