#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int N; cin >> N;

    cpp_int three = 3;
    for (int i = 1; i <= 37; i++) {
        cpp_int five = 5;
        for (int j = 1; j <= 25; j++) {
            if (three + five == N) {
                cout << i << " " << j << endl;
                return 0;
            }
            else if (three + five > N) break;
            five *= 5;
        }
        three *= 3;
    }

    cout << -1 << endl;
    return 0;
}