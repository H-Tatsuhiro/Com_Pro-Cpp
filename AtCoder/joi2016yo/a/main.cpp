#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int sum = 0;
    vector<int> a(4, 0);
    int e, f;
    for (int i = 0; i < 4; i++) cin >> a[i];
    cin >> e >> f;
    sort(a.begin(), a.end()); reverse(a.begin(), a.end());
    for (int i = 0; i < 3; i++) sum += a[i];
    sum += max(e, f);
    cout << sum << endl;
}
