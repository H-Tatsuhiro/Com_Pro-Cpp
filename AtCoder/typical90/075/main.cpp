#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m; cin >> n, m = n;
    vector<long long int> p;
    for (int i = 2; i <= sqrt(m); i++) while (n % i == 0) n /= i, p.push_back(i);
    if (n != 1LL) p.push_back(n);
    long long int cnt = 0, mp = 1;
    while (mp < p.size()) {
        mp *= 2;
        cnt++;
    }
    cout << cnt << endl;
}
