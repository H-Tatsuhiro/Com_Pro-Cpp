#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string a, b; cin >> a >> b;
    bool t = false;
    reverse(a.begin(), a.end()), reverse(b.begin(), b.end());
    for (int i = 0; i < min(a.length(), b.length()) ; i++) {
        int x = (a[i] - '0') + (b[i] - '0');
        if (x >= 10) t = true;
    }
    cout << (t ? "Hard" : "Easy") << endl;
}
