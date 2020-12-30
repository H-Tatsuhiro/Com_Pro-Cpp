#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/lexical_cast.hpp>
using namespace boost::multiprecision;
using boost::lexical_cast;
using namespace std;
int main() {
    string S; cin >> S;
    vector<string> v;
    int n = S.length() - 1;
    cpp_int ans = 0;
    for (int bit = 0; bit < (1 << n); bit++) {
        string t = ""; t += S[0];
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                t += '+';
                t += S[1 + i];
            }
            else t += S[1 + i];
        }
        v.push_back(t);
    }
    for (auto x : v) {
        x += '+';
        string str = "";
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == '+') {
                if (str.length() == 1) ans += (int)str[0] - '1' + 1;
                else ans += lexical_cast<cpp_int>(str);
                str = "";
            }
            else str += x[i];
        }
    }
    cout << ans << endl;
}
