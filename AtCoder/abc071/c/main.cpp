#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    unordered_map<long long int, int> Map;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; Map[a[i]]++;
    }
    vector<long long int> b(2, 0);
    for (int i = 0; i < n; i++) {
        if (Map[a[i]] >= 4) b.push_back(a[i]), b.push_back(a[i]), Map[a[i]] = 0;
        else if (Map[a[i]] >= 2) b.push_back(a[i]), Map[a[i]] = 0;
    }
    sort(b.begin(), b.end());
    cout << (cpp_int)(b[b.size() - 1] * b[b.size() - 2]) << endl;
}
