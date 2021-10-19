#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int p; cin >> p;
    if (p == 1) {
        int a, b; cin >> a >> b;
        cout << a * b << endl;
    }
    else {
        int a, b; string t; cin >> t >> a >> b;
        cout << t << '!' << endl << a * b << endl;
    }
}
