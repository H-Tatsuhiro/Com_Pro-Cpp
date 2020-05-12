#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> X(3, 0);
    for (int i = 0; i < 3; ++i) {
        cin >> X[i];
    }
    sort(X.begin(), X.end());
    cout << X[1] << endl;
}
