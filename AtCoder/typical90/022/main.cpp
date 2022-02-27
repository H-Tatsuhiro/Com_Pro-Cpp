#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    long long int g = gcd(a, gcd(b, c));
    cout << (a / g - 1) + (b / g - 1) + (c / g - 1) << endl;
}
