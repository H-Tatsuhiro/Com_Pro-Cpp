#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    if (c == 0) {
        while(true) {
            a--;
            if (a == 0) {
                cout << "Aoki" << endl;
                break;
            }
            b--;
            if (b == 0) {
                cout << "Takahashi" << endl;
                break;
            }
        }
    }
    else {
        while(true) {
            b--;
            if (b == 0) {
                cout << "Takahashi" << endl;
                break;
            }
            a--;
            if (a == 0) {
                cout << "Aoki" << endl;
                break;
            }
        }
    }
}
