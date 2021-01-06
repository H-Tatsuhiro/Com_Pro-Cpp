#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    cpp_int ans = 0;
    vector<cpp_int> v(5, 0);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s[0] == 'M') v[0]++;
        if (s[0] == 'A') v[1]++;
        if (s[0] == 'R') v[2]++;
        if (s[0] == 'C') v[3]++;
        if (s[0] == 'H') v[4]++;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += v[i] * v[j] * v[k];
            }
        }
    }
    cout << ans << endl;
}
