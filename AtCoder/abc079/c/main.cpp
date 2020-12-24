#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string t; cin >> t;
    vector<int> s(4, 0);
    for (int i = 0; i < 4; i++) {
        if (t[i] == '0') s[i] = 0;
        if (t[i] == '1') s[i] = 1;
        if (t[i] == '2') s[i] = 2;
        if (t[i] == '3') s[i] = 3;
        if (t[i] == '4') s[i] = 4;
        if (t[i] == '5') s[i] = 5;
        if (t[i] == '6') s[i] = 6;
        if (t[i] == '7') s[i] = 7;
        if (t[i] == '8') s[i] = 8;
        if (t[i] == '9') s[i] = 9;
    }
    vector<string> op = {"+++", "++-", "+--", "+-+", "-++", "--+", "-+-", "---"};
    int ans = 0;
    for (int i = 0; i < op.size(); i++) {
        int sum = s[0];
        for (int j = 0; j < 3; j++) {
            if (op[i][j] == '+') sum += s[j + 1];
            else sum -= s[j + 1];
        }
        if (sum == 7) {
            ans = i;
            break;
        }
    }
    for (int i = 0; i < 3; i++) cout << s[i] << op[ans][i];
    cout << s[3] << "=7" << endl;
}
