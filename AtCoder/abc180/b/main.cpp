#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    long long int a = 0, c = 0, b = 0;
    for (int i = 0; i < N; i++) {
        long long int d; cin >> d; d = abs(d);
        if (i == 0) {
            a += d;
            b += d * d;
            c = d;
        }
        else {
            a += d;
            b += d * d;
            c = max(c, d);
        }
    }
    long double bb = (long double)(sqrt(b));
    cout << a << endl;
    cout << setprecision(20) << bb << endl;
    cout << c << endl;
}
