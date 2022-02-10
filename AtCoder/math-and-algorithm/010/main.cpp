#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int sum = 1;
    for (int i = 1; i <= n; i++) sum *= i;
    cout << sum << endl;
}
