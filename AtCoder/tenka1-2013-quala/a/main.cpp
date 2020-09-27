#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    unsigned long long int sum = 42;
    while (sum <= 130000000) {
        sum += sum;
    }
    cout << sum << endl;
}
