#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a(3, 0); cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    if (a[2] - a[1] == a[1] - a[0]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
