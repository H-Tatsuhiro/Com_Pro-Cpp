int my_mid(int x, int y, int z) {
  if ((x > y && x < z) || (x < y && x > z)) {
    return x;
  }
  else if ((y > x && y < z) || (y < x && y > z)) {
    return y;
  }
  else if ((z > x && z < y) || (z < x && z > y)) {
    return z;
  }
  else
  {
    return 0;
  }
}