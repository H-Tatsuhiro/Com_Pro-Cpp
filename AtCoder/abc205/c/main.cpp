#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    char ans = '-';
    if (a >= 0 && b >= 0) {
        if (a == b) ans = '=';
        else if (a > b) ans = '>';
        else ans = '<';
    }
    else if (a < 0 && b >= 0) {
        if (c % 2 == 0) a *= -1;
        if (a == b) ans = '=';
        else if (a > b) ans = '>';
        else ans = '<';
    }
    else if (a >= 0 && b < 0) {
        if (c % 2 == 0) b *= -1;
        if (a == b) ans = '=';
        else if (a > b) ans = '>';
        else ans = '<';
    }
    else {
        if (c % 2 == 0) a *= -1, b *= -1;
        if (a == b) ans = '=';
        else if (a > b) ans = '>';
        else ans = '<';
    }
    cout << ans << endl;
}