#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string ans = "";
    while(true) {
        string s; cin >> s;
        if (cin.eof()) break;
        ans += s + ',';
    }
    ans.pop_back();
    cout << ans << endl;
}
