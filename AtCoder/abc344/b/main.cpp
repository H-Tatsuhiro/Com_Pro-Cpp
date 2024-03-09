#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a;
    int b = 0;
    while (cin >> b) { a.push_back(b); }
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) cout << a[i] << endl;
}


