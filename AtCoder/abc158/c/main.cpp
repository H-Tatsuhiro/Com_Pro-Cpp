#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int per10(int x) {
    return x * 0.1;
}
int per8(int x) {
    return x * 0.08;
}
int main() {
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = 1; i <= 1000000; ++i) {
        if (per8(i) == A && per10(i) == B) {
            ans = i;
            break;
        }
        else if (per8(i) > A || per10(i) > B) {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
}
