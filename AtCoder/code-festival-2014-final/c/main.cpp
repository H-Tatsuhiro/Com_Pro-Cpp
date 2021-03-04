#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a; cin >> a;
    for (int k = 10; k <= 10000; k++) {
        string s = to_string(k);
        long long int t = 0;
        for (int j = 0; j < s.length(); j++) t = (t * k) + s[j] - '0';
        if (t == a) {
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
