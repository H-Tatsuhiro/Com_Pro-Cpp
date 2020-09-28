#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    if (abs(a - 0) < abs(b - 0)) cout << "Ant" << endl;
    else if (abs(a - 0) > abs(b - 0)) cout << "Bug" << endl;
    else cout << "Draw" << endl;
}
