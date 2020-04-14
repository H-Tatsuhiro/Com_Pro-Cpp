// include <cmath/limits>
void QE(int x, int y, int z) {
  double A, B, C, E, D;
  D = (y * y) - (4 * x * z);
  if (D > 0) {
    A = (-y + /*sqrt*/(D)) / (2 * x);
    B = (-y - /*sqrt*/(D)) / (2 * x);
    C = 0;
    E = 0;
  }
  else if (D == 0) {
    A = -y / (2 * x);
    C = 0;
  }
  else {
    A = -y / (2 * x);
    B = -y / (2 * x);
    C = /*sqrt*/(-D) / (2 * x);
    E = /*sqrt*/(-D) / (2 * x);
  }
}
/** Outputs Points.
 *    cout << fixed << setprecision(1) << endl;
 *    if (D == 0) {
 *      cout << "x = " << A << " + " << C << "i" << endl;
 *    }
 *    else {
 *      cout << "x = " << A << " + " << C << "i, " <<  B << " + " << E << "i" << endl;
 *    }
 *    
 */