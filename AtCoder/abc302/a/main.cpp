#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b; cin >> a >> b;
    cout << (a / b) + (a % b != 0 ? 1 : 0) << endl;
}


