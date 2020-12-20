#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'J') a++;
        else if (s[i] == 'O') b++;
        else if (s[i] == 'I') c++;
    }
    for (int i = 0; i < a; i++) cout << 'J';
    for (int i = 0; i < b; i++) cout << 'O';
    for (int i = 0; i < c; i++) cout << 'I';
    cout << endl;
}
