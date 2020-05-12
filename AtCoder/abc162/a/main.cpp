#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S;
    cin >> S;
    for (int i = 0; i < 3; ++i) {
        if (S[i] == '7') {
            cout << "Yes" << endl;
            break;
        }
        else if (i == 2) cout << "No" << endl;
    }
}
