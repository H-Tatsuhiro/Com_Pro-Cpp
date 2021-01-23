#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if(a < b) {
        return gcd(b, a);
    }
    unsigned long long r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}
int main() {
    int n, x; cin >> n >> x;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 1) {
        cout << abs(a[0] - x) << endl;
        return 0;
    }
    long long int m = gcd(abs(x - a[0]) , abs(x - a[1]));
    for (int i = 2; i < n; i++) m = gcd(m, abs(x - a[i]));
    cout << m << endl;
}
