#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    n %= 998244353;
    if (n < 0) n += 998244353;
    cout << n << endl;
}
