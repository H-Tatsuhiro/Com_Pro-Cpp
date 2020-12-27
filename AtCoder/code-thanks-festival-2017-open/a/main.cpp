#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> t(8, 0);
    for (int i = 0; i < 8; i++) cin >> t[i];
    sort(t.begin(), t.end());
    cout << t[7] << endl;
}
