#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int cnt = 0;
    if (n < 10) cnt = 3;
    else if (n < 100) cnt = 2;
    else if (n < 1000) cnt = 1;
    for (int i = 0; i < cnt; i++) cout << 0;
    cout << n << endl;
}
