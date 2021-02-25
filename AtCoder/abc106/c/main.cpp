#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int k; cin >> k;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            if (k - 1 == i) {
                cout << 1 << endl;
                break;
            }
            else continue;
        }
        else {
            cout << s[i] << endl;
            break;
        }
    }
}
