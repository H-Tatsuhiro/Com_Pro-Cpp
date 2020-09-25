#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<string> floor = {"B9", "B8", "B7", "B6", "B5", "B4", "B3", "B2", "B1", "1F", "2F", "3F", "4F", "5F", "6F", "7F", "8F", "9F"};
    string s, t; cin >> s >> t; int a = 0, b = 0;
    for (int i = 0; i < 18; i++) {
        if (floor[i] == s) a = i + 1;
        if (floor[i] == t) b = i + 1;
    }
    cout << abs(a - b) << endl;
}
