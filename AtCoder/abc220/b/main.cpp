#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <boost/lexical_cast.hpp>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

class Radix {
private:
    const char* s;
    int a[128];
public:
    Radix(const char* s = "0123456789ABCDEF") : s(s) {
        int i;
        for(i = 0; s[i]; ++i)
            a[(int)s[i]] = i;
    }
    std::string to(long long p, int q) {
        int i;
        if(!p)
            return "0";
        char t[64] = { };
        for(i = 62; p; --i) {
            t[i] = s[p % q];
            p /= q;
        }
        return std::string(t + i + 1);
    }
    std::string to(const std::string& t, int p, int q) {
        return to(to(t, p), q);
    }
    long long to(const std::string& t, int p) {
        int i;
        long long sm = a[(int)t[0]];
        for(i = 1; i < (int)t.length(); ++i)
            sm = sm * p + a[(int)t[i]];
        return sm;
    }
};
int main() {
    int k; cin >> k;
    string a, b; cin >> a >> b;
    Radix r;
    boost::multiprecision::cpp_int x = boost::lexical_cast<boost::multiprecision::cpp_int>(r.to(a, k));
    boost::multiprecision::cpp_int y = boost::lexical_cast<boost::multiprecision::cpp_int>(r.to(b, k));
    cout << x * y << endl;
}


