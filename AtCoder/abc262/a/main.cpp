#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int y; cin >> y;
    if (y % 4 == 3) y += 3;
    else if (y % 4 == 0) y += 2;
    else if (y % 4 == 1) y++;
    cout << y << endl;
}
