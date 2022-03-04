#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, c, x = 1; cin >> a >> b >> c;
    for (int i = 0; i < b; i++) x *= c;
    cout << (a < x ? "Yes" : "No") << endl;
}
