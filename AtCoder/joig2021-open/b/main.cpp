#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; string t; cin >> n >> k >> t;
    for (int i = 0; i < n; i++) {
        if (i >= k - 1) {
            if (t[i] == 'j') t[i] = 'J';
            else if (t[i] == 'o') t[i] = 'O';
            else if (t[i] == 'i') t[i] = 'I';
            else if (t[i] == 'J') t[i] = 'j';
            else if (t[i] == 'O') t[i] = 'o';
            else t[i] = 'i';
        }
    }
    cout << t << endl;
}
