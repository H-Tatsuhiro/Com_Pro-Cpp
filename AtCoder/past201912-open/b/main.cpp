#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main() {
    int n; cin >> n;
    cpp_int tmp; cin >> tmp;
    for (int i = 1; i < n; i++) {
        cpp_int next; cin >> next;
        if (next == tmp) cout << "stay" << endl;
        else if (next > tmp) cout << "up " << next - tmp << endl;
        else cout << "down " << tmp - next << endl;
        tmp = next;
    }
}
