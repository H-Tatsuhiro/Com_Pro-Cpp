#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b; cin >> a >> b;
    long long int c = a;
    for (int i = 1; i < b; i++) c *= a;
    cout << c << endl;
}


