#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S; cin >> S;
    int n = S.length();
    if (S[n - 1] == 's') cout << S << "es" << endl;
    else cout << S << 's' << endl;
}
