#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <bitset>
using namespace std;
int main() {
    long long int k; cin >> k;
    string ans = "";
    bitset<64> a = k;
    for (int i = 63; i >= 0; i--) {
        if (a[i]) ans.push_back('2');
        else ans.push_back('0');
    }
    int idx = -1;
    for (int i = 0; i < ans.length(); i++) {
        if (ans[i] == '2') {
            idx = i;
            break;
        }
    }
    if (k == 0) cout << 0 << endl;
    else {
        for (int i = idx; i < ans.length(); i++) cout << ans[i];
        cout << endl;
    }
}
