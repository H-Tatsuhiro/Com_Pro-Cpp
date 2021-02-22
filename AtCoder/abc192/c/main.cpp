#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    long long int n; int k; cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        string x = boost::lexical_cast<string>(n);
        sort(x.begin(), x.end());
        long long int a = boost::lexical_cast<long long int>(x);
        reverse(x.begin(), x.end());
        long long int b = boost::lexical_cast<long long int>(x);
        n = b - a;
    }
    cout << n << endl;
}
