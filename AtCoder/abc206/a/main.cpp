#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long double a = n * 1.08;
    if ((int)a < 206) cout << "Yay!" << endl;
    else if ((int)a == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;
}
