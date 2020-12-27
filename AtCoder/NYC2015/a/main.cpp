#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    string s = "";
    while(n > 0) {
        int x = n % 2;
        char c;
        if (x == 0) c = '0';
        else c = '1';
        s += c;
        n /= 2;
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
