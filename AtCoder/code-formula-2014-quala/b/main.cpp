#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    vector<char> ans(10, 'x');
    for (int i = 0; i < a; i++) {
        int c; cin >> c; ans[c] = '.';
    }
    for (int i = 0; i < b; i++) {
        int c; cin >> c; ans[c] = 'o';
    }
    vector<string> output(4, "       ");
    output[0][6] = ans[0];
    output[3][3] = ans[1];
    output[2][2] = ans[2];
    output[2][4] = ans[3];
    output[1][1] = ans[4];
    output[1][3] = ans[5];
    output[1][5] = ans[6];
    output[0][0] = ans[7];
    output[0][2] = ans[8];
    output[0][4] = ans[9];
    for (int i = 0; i < 4; i++) cout << output[i] << endl;
}
