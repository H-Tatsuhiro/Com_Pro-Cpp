#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<int> v(6, 0);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') v[0]++;
        if (s[i] == 'B') v[1]++;
        if (s[i] == 'C') v[2]++;
        if (s[i] == 'D') v[3]++;
        if (s[i] == 'E') v[4]++;
        if (s[i] == 'F') v[5]++;
    }
    for (int i = 0; i < 6; i++) {
        if (i == 5) cout << v[i] << endl;
        else cout << v[i] << " ";
    }
}
