#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> x(4, 0);
    string s; cin >> s;
    for (int i = 0; i < 4; i++) x[i] = boost::lexical_cast<int>(s[i]);
    if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) cout << "Weak" << endl;
    else {
        bool t = false;
        for (int i = 0; i < 3; i++) if (x[i + 1] != v[x[i] + 1]) t = true;
        if (t) cout << "Strong" << endl;
        else cout << "Weak" << endl;
    }
}
