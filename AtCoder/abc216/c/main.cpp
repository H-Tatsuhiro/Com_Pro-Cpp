#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    string ans = "";
    while (n > 0) {
        if (n % 2 == 0) {
            n /= 2;
            ans += 'B';
        }
        else {
            n--;
            ans += 'A';
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
