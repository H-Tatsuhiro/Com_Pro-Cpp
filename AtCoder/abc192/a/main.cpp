#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x; cin >> x;
    int ans = x % 100;
    cout << 100 - ans << endl;
}
