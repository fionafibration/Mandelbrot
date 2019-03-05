int main()
{
  double x, y, u, v, u2, v2;
  int i,j,k;
  for (j = 0; j < 33; j++) {
	  y = 1.0 - j * (2.0 / 33);
    for(i = 0; i < 80; i++) {
      u = 0.0;
      v = 0.0;
      u2 = u * u;
      v2 = v*v;
      x = -2.0 + i * 0.0375;
      for (k = 1; k < 2e3 && (u2 + v2 < 4.0); k++) {
            v = 2 * u * v + y;
            u = u2 - v2 + x;
            u2 = u * u;
            v2 = v * v;
      };
	  putchar(k >= 27 ? 32 : 97 + k / 3);
    }
	putchar(10);
  }
}
