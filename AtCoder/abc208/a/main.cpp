#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    cout << (a * 1 <= b && b <= a * 6 ? "Yes" : "No") << endl;
}
