#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = 0;
    for (int i = 1; i < 1000000; i++) {
        string m = boost::lexical_cast<string>(i) + boost::lexical_cast<string>(i);
        long long int a = boost::lexical_cast<long long int>(m);
        if (a <= n) ans++;
        else break;
    }
    cout << ans << endl;
}
