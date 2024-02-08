#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    string ans = "";
    vector<char> v = {'0', '2', '4', '6', '8'};
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    n--;
    while (n > 0) {
        int i = n % 5;
        ans += v[i];
        n /= 5;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
