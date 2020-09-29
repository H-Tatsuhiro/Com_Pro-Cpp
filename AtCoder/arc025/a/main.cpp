#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int sum = 0;
    vector<int> a(7, 0), b(7, 0);
    for (int i = 0; i < 7; i++) cin >> a[i];
    for (int i = 0; i < 7; i++) cin >> b[i];
    for (int i = 0; i < 7; i++) sum += max(a[i], b[i]);
    cout << sum << endl;
}
