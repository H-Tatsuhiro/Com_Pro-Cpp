#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
    }
    cout << sum << endl;
}
