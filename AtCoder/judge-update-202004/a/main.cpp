#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int s, l, r; cin >> s >> l >> r;
    if (l <= s && s <= r) cout << s << endl;
    else if (s < l) cout << l << endl;
    else if (s > r) cout << r << endl;
}
