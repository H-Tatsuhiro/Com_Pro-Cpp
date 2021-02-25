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
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) a[i + 1] = gcd(a[i], a[i + 1]);
    cout << a[n - 1] << endl;
}
