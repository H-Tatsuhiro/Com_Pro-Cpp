#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x; cin >> x;
    if (x % 100 == 0 && x != 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
