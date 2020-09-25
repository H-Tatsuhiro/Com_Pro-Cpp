#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B, C, D, E; cin >> A >> B >> C >> D >> E;
    int second = 0;
    if (A < 0) second += abs(A) * C, A = 0;
    if (A == 0) second += D;
    if (A < B) second += (B - A) * E;
    cout << second << endl;
}
