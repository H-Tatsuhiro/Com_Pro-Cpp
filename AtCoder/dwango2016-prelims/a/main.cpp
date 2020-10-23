#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++) if (i % 25 == 0) cnt++;
    cout << cnt << endl;

}
