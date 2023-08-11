#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') a++;
        else b++;
    }
    if (a == b) {
        int c = a;
        a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'T') {
                a++;
                if (a == c) {
                    cout << 'T' << endl;
                    break;
                }
            }
            else {
                b++;
                if (b == c) {
                    cout << 'A' << endl;
                    break;
                }
            }
        }
    }
    else cout << (a > b ? 'T' : 'A') << endl;
}


