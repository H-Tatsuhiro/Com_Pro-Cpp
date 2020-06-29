#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    if (x < y) printf("%s\n", "Better");
    else printf("%s\n", "Worse");
}
