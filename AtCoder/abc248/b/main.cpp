#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, k; cin >> a >> b >> k;
    int ans = 0;
    while(a < b) {
        a *= k;
        ans++;
    }
    cout << ans << endl;
}
