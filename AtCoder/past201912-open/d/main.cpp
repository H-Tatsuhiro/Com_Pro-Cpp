#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    unordered_map<int, int> Map;
    int x = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; Map[a[i]]++;
        if (Map[a[i]] > 1) x = a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (Map[i] == 0) {
            cout << x << " " << i << endl;
            return 0;
        }
    }
    cout << "Correct" << endl;
    return 0;
}
