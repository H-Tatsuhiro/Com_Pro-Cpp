#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <bitset>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    bitset<8> bs1(a), bs2(b);
    for (int i = 0; i <= 255; i++) {
        bitset<8> bs3(i);
        if ((bs1 ^ bs3) == bs2) {
            cout << i << endl;
            break;
        }
    }
}
