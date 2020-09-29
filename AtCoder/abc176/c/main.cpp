#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int sum = 0, f = 0;
    cin >> f;
    for (int i = 1; i < n; i++) {
        int a; cin >> a;
        if (f >= a) {
            sum += f - a, a = f;
        }
        else f = a;
    }
    cout << sum << endl;
}
