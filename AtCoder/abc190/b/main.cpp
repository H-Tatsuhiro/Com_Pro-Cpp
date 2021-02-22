#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, s, d; cin >> n >> s >> d;
    for (int i = 0; i < n; i++) {
        long long int x, y; cin >> x >> y;
        if (x < s && y > d) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
