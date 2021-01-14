#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    long long int sum = 0;
    for (int i = 1; i <= n; i++) sum += i * i;
    cout << sum % m << endl;
}
