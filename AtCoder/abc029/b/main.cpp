#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int cnt = 0;
    for (int i = 0; i < 12; i++) {
        string s; cin >> s;
        for (auto c : s) {
            if (c == 'r') {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}
