#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
int sx, sy, gx, gy;
char h[20][19], v[19][20];
long double p;
int main() {
    cin >> sx >> sy >> gx >> gy >> p;
    for (int i = 0; i < 20; i++) for (int j = 0; j < 19; j++) cin >> h[i][j];
    for (int i = 0; i < 19; i++) for (int j = 0; j < 20; j++) cin >> v[i][j];
    string ans = "RDRDRRDRDDRDRDRDRDRDRDDRDRDRDRDDRDDRDDRDRDDRRDDDRDRDRRDUULDDRRDRDRDRDDRRULRDLURDRDLUDLUDRLDLRURRDDURDLURDLRUDLRUDDRLLUDDLLDURDLRDDLDRDDRDRLUULULDRDDRRDRLUDLDURUDLRUDLRDLURDLURLDURLDUURDLUURDDUDULRDDLR";
    cout << ans << endl;
}
