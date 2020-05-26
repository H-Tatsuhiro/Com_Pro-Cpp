#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string N;
    cin >> N;
    int len = N.length();
    if (N[len - 1] == '3') cout << "bon" << endl;
    else if (N[len - 1] == '0' || N[len - 1] == '1' || N[len - 1] == '6' || N[len - 1] == '8') cout << "pon" << endl;
    else cout << "hon" << endl;
}
