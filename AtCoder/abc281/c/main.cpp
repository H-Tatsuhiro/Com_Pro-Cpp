#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, t; cin >> n >> t;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int b = 0;
    for (int i = 0; i < n; i++) b += a[i];
    long long int c = t / b;
    t -= b * c;
    if (t == 0) t += b;
    for (int i = 0; i < n; i++) {
        if (t - a[i] <= 0) {
            cout << i + 1 << " " << t << endl;
            break;
        }
        else t -= a[i];
    }
}


