#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, n; cin >> a >> b >> n;
    string x; cin >> x;
    for (int i = 0; i < n; i++) {
        if (x[i] == 'S') {
            if (a > 0) a--;
        }
        if (x[i] == 'C') {
            if (b > 0) b--;
        }
        if (x[i] == 'E') {
            if (a > b) a--;
            else if (a < b) b--;
            else if (a > 0 && b > 0 && a == b) a--;
        }
    }
    cout << a << endl << b << endl;
}
