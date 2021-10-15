#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    string s; cin >> s;
    int num = 0;
    for (int i = 0; i < s.length() - 1; i++) if (i % 2 == 0) num += boost::lexical_cast<int>(s[i]);
    num *= 3;
    for (int i = 0; i < s.length() - 1; i++) if (i % 2 != 0) num += boost::lexical_cast<int>(s[i]);
    num %= 10;
    cout << (num == boost::lexical_cast<int>(s[14]) ? "Yes" : "No") << endl;

}
