#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    long double ans = 0;
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        if (c == 'A') ans += 4;
        else if (c == 'B') ans += 3;
        else if (c == 'C') ans += 2;
        else if (c == 'D') ans += 1;
    }
    cout << setprecision(20) << (double)(ans / n) << endl;
}
