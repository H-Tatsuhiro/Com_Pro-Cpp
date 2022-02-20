#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    if (a == 1 && b == 10) cout << "Yes" << endl;
    else if (b - 1 == a) cout << "Yes" << endl;
    else cout << "No" << endl;
}
