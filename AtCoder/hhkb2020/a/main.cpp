#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    char a, b; cin >> a >> b;
    if (a == 'Y') {
        if (b == 'a') cout << 'A';
        else if (b == 'b') cout << 'B';
        else cout << 'C';
    }
    else cout << b;
    cout << endl;
}
