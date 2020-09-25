#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
namespace boost_int = boost::multiprecision;
using booint = boost_int::cpp_int;
using namespace std;
int main() {
    long long int N, A, B; cin >> N >> A >> B;
    booint ans = (B - A) * (N - 2) + 1;
    if ((N == 1 && A != B) || A > B) cout << 0 << endl;
    else if (N == 1) cout << 1 << endl;
    else cout << ans << endl;
}
