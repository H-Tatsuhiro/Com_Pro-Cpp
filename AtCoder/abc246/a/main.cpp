//
// Created by private on 2022/04/02.
//
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    if (a == c) {
        if (b == d) cout << e << ' ' << f << endl;
        else if (d == f) cout << e << ' ' << b << endl;
        else cout << e << ' ' << d << endl;
    }
    else if (a == e) {
        if (b == d) cout << c << ' ' << f << endl;
        else if (d == f) cout << c << ' ' << b << endl;
        else cout << c << ' ' << d << endl;
    }
    else {
        if (b == d) cout << a << ' ' << f << endl;
        else if (d == f) cout << a << ' ' << b << endl;
        else cout << a << ' ' << d << endl;
    }
}
