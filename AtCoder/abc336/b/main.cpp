#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int ans = 0;
    while (n > 0) {
        int a = n % 2;
        if (a == 1) break;
        else {
            n /= 2;
            ans++;
        }
    }
    cout << ans << endl;
}


