#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    string n; cin >> n;
    int m = n.length();
    vector<int> v(m, 0);
    long long int ans = 0;
    for (int i = 0; i < m; i++) v[i] = i + 1;
    do {
        string p = "";
        for (int i = 0; i < m; i++) p += n[v[i] - 1];
        for (int i = 1; i <= m - 1; i++) {
            string a = p.substr(0, i), b = p.substr(i, m - i);
            if (a[0] == '0' || b[0] == '0') continue;
            ans = max(ans, boost::lexical_cast<long long int>(a) * boost::lexical_cast<long long int>(b));
        }
    } while(next_permutation(v.begin(), v.end()));
    cout << ans << endl;
}
