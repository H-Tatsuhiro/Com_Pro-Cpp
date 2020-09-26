#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a == c) cout << "YES" << endl;
    else {
        swap(a, b);
        if (a == c) cout << "YES" << endl;
        else {
            swap(c, d);
            if (a == c) cout << "YES" << endl;
            else {
                swap(a, b);
                if (a == c) cout << "YES" << endl;
                else {
                   cout << "NO" << endl;
                }
            }
        }
    }
}
