#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int W, H; cin >> W >> H;
    if (W % 16 == 0 && H % 9 == 0) printf("%s\n", "16:9");
    else printf("%s\n", "4:3");
}
