#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    if (N <= 59) cout << "Bad";
    else if (N <= 89) cout << "Good";
    else if (N <= 99) cout << "Great";
    else cout << "Perfect";
    cout << endl;
}
