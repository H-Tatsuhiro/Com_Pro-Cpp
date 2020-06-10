
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned long long int ull;
ull A, B, X, maxi = 1000000000, mini = 0;

bool calc(ull arg) {
    int D = to_string(arg).length();
    if (A * arg + D * B <= X) return true;
    else return false;
}

void bin_search() {
    while (maxi - mini > 1) {
        ull tmp = (maxi + mini) / 2;
        if (calc(tmp)) mini = tmp;
        else maxi = tmp;
    }
}

int main() {
    cin >> A >> B >> X;
    if (calc(maxi)) {
        cout << maxi << endl;
        return 0;
    }
    else bin_search();
    cout << mini << endl;
    return 0;
}