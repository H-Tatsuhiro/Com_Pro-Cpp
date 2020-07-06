#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string a, b; cin >> a >> b;
    a += b;
    int n = stoi(a);
    double x = 1.0;
    if (modf(sqrt(n), &x) == 0) printf("%s\n", "Yes");
    else printf("%s\n", "No");
}
