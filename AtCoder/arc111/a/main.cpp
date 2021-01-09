#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/math>
using namespace atcoder;
using namespace std;
int main() {
    long long int a, b; cin >> a >> b;
    cout << pow_mod(10, a, b * b) / b << endl;
}