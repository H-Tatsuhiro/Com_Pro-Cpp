#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int f(int n) {
    return (n * n + 4.0) / 8.0;
}
int main() {
    cout << f(f(f(20))) << endl;
}
