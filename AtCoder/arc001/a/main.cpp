#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    vector<int> a(4, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') a[0]++;
        if (s[i] == '2') a[1]++;
        if (s[i] == '3') a[2]++;
        if (s[i] == '4') a[3]++;
    }
    sort(a.begin(), a.end());
    cout << a[3] << " " << a[0] << endl;
}
