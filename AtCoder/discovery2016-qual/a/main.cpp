#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    int w, cnt = 0; cin >> w;
    for (int i = 0; i < s.length(); i++) {
        cnt++;
        cout << s[i];
        if (cnt == w || i == s.length() - 1) {
            cout << endl;
            cnt = 0;
        }
    }
}
