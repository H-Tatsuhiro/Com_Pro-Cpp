#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    int n, ans = 0; cin >> n;
    unordered_map<string, bool> Map;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if (a > b) swap(a, b);
        string p = boost::lexical_cast<string>(a) + " " + boost::lexical_cast<string>(b);
        if (!Map[p]) ans++, Map[p] = true;
    }
    cout << ans << endl;
}
