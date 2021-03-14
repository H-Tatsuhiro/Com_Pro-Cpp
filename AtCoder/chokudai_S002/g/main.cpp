#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> T gcd(T a, T b) {
    if(a < b) {
        return gcd(b, a);
    }
    T r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
}
