#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string T;
    cin >> T;
    long long int N = T.length();
    for (long long int i = 0; i < N; ++i) {
       if (T[i] == '?') T[i] = 'D';
    }
    cout << T << endl;
}
