#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "A") m++;
        else m--;
        if (m < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (m == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
