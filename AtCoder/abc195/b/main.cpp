#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, w; cin >> a >> b >> w;
    w *= 1000;
    int i = w % a, j = w % b, k = w / a, l = w / b;
    if (j != 0) l++;
    if (l > k) cout << "UNSATISFIABLE" << endl;
    else cout << l << " " << k << endl;
}
