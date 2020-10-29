#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = 0, a = n / 10, b = n % 10;
    sum += a * 100;
    if (b <= 6) sum += b * 15;
    else sum += 100;
    cout << sum << endl;
}
