#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int main() {
    int n; cin >> n;
    long long int g = 0;
    for (int i = 0; i < n; i++) {
        long long int a; cin >> a;
        g = gcd(g, a);
    }
    cout << g << endl;

}
