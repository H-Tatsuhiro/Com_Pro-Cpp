#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int K = 0;
    string S;
    cin >> K >> S;
    int N = S.length();
    if (N > K) {
        string str = S.substr(0, K) + "...";
        cout << str << endl;
    }
    else cout << S << endl;
}
