int tpd(int x, int y) {
  if (x > y) {
    return x - y;
  }
  else if (y > x) {
    return y - x;
  }
  else {
    return 0;
  }
}