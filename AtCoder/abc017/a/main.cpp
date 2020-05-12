#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int sum = 0, s = 0, e = 0;
    for (int i = 0; i < 3; ++i) {
        cin >> s >> e;
        sum += s * (e * 0.1);
}
    cout << sum << endl;
}
