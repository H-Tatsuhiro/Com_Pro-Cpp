#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, X, T; cin >> N >> X >> T;
    int a = N / X; N %= X;
    if (N != 0) a++;
    cout << a * T << endl;
}
