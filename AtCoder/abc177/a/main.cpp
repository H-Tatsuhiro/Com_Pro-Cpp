#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int D, T, S; cin >> D >> T >> S;
    if (T * S >= D) cout << "Yes" << endl;
    else cout << "No" << endl;
}