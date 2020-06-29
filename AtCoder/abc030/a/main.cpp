#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B, C, D; cin >> A >> B >> C >> D;
    double x = B / (A * 1.0), y = D / (C * 1.0);
    if (x > y) cout << "TAKAHASHI";
    else if (x == y) cout << "DRAW";
    else cout << "AOKI";
    cout << endl;
}
