#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int a = -1, b = 1;
    for (int i = 1; i <= 31; i++) a *= 2, b *= 2;
    if (a <= n && n < b) cout << "Yes" << endl;
    else cout << "No" << endl;
}
