#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k, a; cin >> n >> k >> a;
    while(k > 0) {
        k--;
        if (k == 0) cout << a << endl;
        a = (a == n ? 1 : a + 1);
    }
}
