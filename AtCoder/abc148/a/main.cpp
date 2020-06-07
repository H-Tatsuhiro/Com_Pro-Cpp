#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B; cin >> A >> B;
    if (A + B == 3) cout << 3 << endl;
    else if (A + B == 5) cout << 1 << endl;
    else cout << 2 << endl;
}
