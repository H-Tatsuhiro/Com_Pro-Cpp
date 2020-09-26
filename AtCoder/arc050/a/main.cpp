#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    char a, b; cin >> a >> b;
    if (a == (char)(b - 32)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
