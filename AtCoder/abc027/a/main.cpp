#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a(3, 0);
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if (a[1] == a[0]) printf("%d\n", a[2]);
    else printf("%d\n", a[0]);
}
