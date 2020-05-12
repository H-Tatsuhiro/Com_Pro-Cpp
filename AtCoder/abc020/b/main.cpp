#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;
    string S = A + B;
    int num = atoi(S.c_str());
    cout << num * 2 << endl;
}
