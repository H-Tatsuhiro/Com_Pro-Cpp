#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b; cin >> a >> b;
    a--;
    long long int cnt = (b / 4) - (b / 100) + (b / 400) - (a / 4) + (a / 100) - (a / 400);
    cout << cnt << endl;
}
