#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    int ans = 1;
    while(true) {
        if (ans * ans <= n) ans++;
        else {
            ans--;
            break;
        }
    }
    cout << ans << endl;
}
