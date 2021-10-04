#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    set<char> s;
    vector<char> c = {'B', 'R', 'G', 'H'};
    for (int i = 0; i < 3; i++) {
        string ss; cin >> ss;
        s.insert(ss[1]);
    }
    for (int i = 0; i < 4; i++) {
        s.insert(c[i]);
        if (s.size() > 3) {
            cout << 'A' << c[i] << 'C' << endl;
            break;
        }
    }
}
