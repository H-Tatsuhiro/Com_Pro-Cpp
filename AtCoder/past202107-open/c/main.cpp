#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
int main() {
    string s; boost::multiprecision::cpp_int l, r; cin >> s >> l >> r;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '0') {
            cout << "No" << endl;
            return 0;
        }
        else break;
    }

    boost::multiprecision::cpp_int a = boost::lexical_cast<boost::multiprecision::cpp_int>(s);
    if (l <= a && a <= r) cout << "Yes" << endl;
    else cout << "No" << endl;
}
