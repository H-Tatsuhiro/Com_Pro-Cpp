#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = 1;
    for (int i = 0; i < n; i++) sum *= 4;
    cout << sum << endl;
}
