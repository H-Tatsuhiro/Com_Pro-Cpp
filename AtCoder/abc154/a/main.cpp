#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T >> A >> B >> U;
    if (U == S) cout << A - 1 << " " << B << endl;
    else cout << A << " " << B - 1 << endl;
}
