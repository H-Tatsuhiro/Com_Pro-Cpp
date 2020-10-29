#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a(50, 0);
    int n; cin >> n;
    a[1] = 1;
    for (int i = 2; i <= 50; i++) a[i] = a[i - 1] + a[i - 2];
    cout << a[n + 1] << endl;
}