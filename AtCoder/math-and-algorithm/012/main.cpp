#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    bool t = true;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) t = false;
    cout << (t ? "Yes" : "No") << endl;
}
