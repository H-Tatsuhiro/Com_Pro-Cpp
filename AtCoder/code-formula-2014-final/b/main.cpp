#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, ans = 0; cin >> n;
    long long int a = n / 2, b = n - a;
    ans = b * 3 - a * 2;
    cout << ans << endl;
}
