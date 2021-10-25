#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    long long int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    long long int g = gcd(n, m), l = lcm(n, m);
    n /= g, m /= g;
    bool f = true;
    for (long long int i = 0; i < g; i++) if (s[i * n] != t[i * m]) f = false;
    cout << (f ? l : -1) << endl;
}
