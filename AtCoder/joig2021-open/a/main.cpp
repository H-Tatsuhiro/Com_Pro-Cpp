#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int s = max(a, max(b, c));
    cout << (s - a) + (s - b) + (s - c) << endl;
}
