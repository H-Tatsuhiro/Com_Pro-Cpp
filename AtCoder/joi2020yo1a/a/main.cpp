#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        int a; cin >> a;
        if (a == 1) cnt++;
    }
    if (cnt < 3 - cnt) cout << 2 << endl;
    else cout << 1 << endl;
}
