#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int s, t, x; cin >> s >> t >> x;
    if (s < t) cout << (s <= x && x < t ? "Yes" : "No") << endl;
    else cout << (t <= x && x < s ? "No" : "Yes") << endl;
}
