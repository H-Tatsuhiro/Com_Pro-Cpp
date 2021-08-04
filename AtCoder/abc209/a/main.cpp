#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    cout << (a <= b ? b - a + 1 : 0)<< endl;
}
