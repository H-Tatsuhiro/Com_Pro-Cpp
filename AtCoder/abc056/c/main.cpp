#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int X; cin >> X;
    long long int ans = 0, sum = 0;
    while (sum < X) {
        ans++;
        sum += ans;
    }
    cout << ans << endl;
}
