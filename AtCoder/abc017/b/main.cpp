#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string X;
    cin >> X;
    bool T = true;
    int N = X.length();
    for (int i = 0; i < N; ++i) {
        if (i < N - 2 && X[i] == 'c' && X[i + 1] == 'h') {
            i++;
        }
        else if (X[i] == 'o' || X[i] == 'k' || X[i] == 'u') {
            continue;
        }
        else {
            T = false;
            break;
        }
    }
    if (T) cout << "YES" << endl;
    else cout << "NO" << endl;
}
