#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    int sum = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c; cin >> c;
            if (c != '.') sum += boost::lexical_cast<int>(c);
        }
    }
    cout << sum << endl;
}
