#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    long long int cnt = 0, x = 0, y = 0, z = 0;
    if (!(a % 2 == 0 && b % 2 == 0 && c % 2 == 0)) {
        cout << cnt << endl;
        return 0;
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && (a == b && b == c)) {
        cout << -1 << endl;
        return 0;
    }
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && !(a == b && b == c) && cnt != -1) {
        cnt++, x = a / 2, y = b / 2, z = c / 2;
        a = y + z, b = x + z, c = x + y;
        if (a == b && b == c) cnt = -1;
    }
    cout << cnt << endl;
    return 0;
}
