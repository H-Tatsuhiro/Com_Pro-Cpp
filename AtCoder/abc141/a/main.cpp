#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S; cin >> S;
    if (S == "Sunny") cout << "Cloudy" << endl;
    else if (S == "Cloudy") cout << "Rainy" << endl;
    else cout << "Sunny" << endl;
}
