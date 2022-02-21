#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a(20, 0);
    for (int i = 0; i < 20; i++) {
        a[i] = i + 1;
        cout << a[i] << endl;
    }
}
