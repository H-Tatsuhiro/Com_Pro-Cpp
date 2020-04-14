int my_min(int x, int y, int z) {
  if (x < y && x < z) {
    return x;
  }
  else if (y < x && y < z) {
    return y;
  }
  else if (z < x && z < y) {
    return z;
  }
  else
  {
    return 0;
  }
}