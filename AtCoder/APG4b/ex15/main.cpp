#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int x = 0, a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        cin >> x; a += x;
    }
    for (int i = 0; i < n; i++) {
        cin >> x; b += x;
    }
    for (int i = 0; i < n; i++) {
        cin >> x; c += x;
    }
    cout << a * b * c << endl;
}
