#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<char> v = {'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (int i = 0; i < s.length(); i++) {
        for (int j = 3; j < v.size(); j++) {
            if (v[j] == s[i]) {
                s[i] = v[j - 3];
                break;
            }
        }
    }
    cout << s << endl;
}
