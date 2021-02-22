#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int k; cin >> k;
    long long int ans = 0;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; i * j <= k; j++) {
            for (int l = 1; i * j * l <= k; l++) ans++;
        }
    }
    cout << ans << endl;
}
