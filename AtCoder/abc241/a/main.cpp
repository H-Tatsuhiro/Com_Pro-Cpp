#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a(10, 0);
    for (int i = 0; i < 10; i++) cin >> a[i];
    int ans = 0;
    int x = a[ans];
    x = a[x];
    cout << a[x] << endl;
}
