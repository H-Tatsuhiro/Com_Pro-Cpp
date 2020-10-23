#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
   long long int n; cin >> n;
    vector<long long int> a;
    for (long long int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0 && i == n / i) a.push_back(i);
        else if (n % i == 0) {
            a.push_back(i);
            a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    for (auto x : a) cout << x << endl;
}
