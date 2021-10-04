#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    string s; cin >> s;
    if (s.length() == 3) {
        string a = s.substr(0, 1), b = s.substr(2, 1);
        int x = boost::lexical_cast<int>(b);
        if (0 <= x && x <= 2) cout << a << '-' << endl;
        else if (3 <= x && x <= 6) cout << a << endl;
        else cout << a << '+' << endl;
    }
    else {
        string a = s.substr(0, 2), b = s.substr(3, 1);
        int x = boost::lexical_cast<int>(b);
        if (0 <= x && x <= 2) cout << a << '-' << endl;
        else if (3 <= x && x <= 6) cout << a << endl;
        else cout << a << '+' << endl;
    }
}
