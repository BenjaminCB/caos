
long calc2x2(long*a, long*b, const int length){
 long res1 = 0,
      res2 = 0;
 int i = 0;

 for (; i < length - 1; i += 2) {
    res1 += a[i] * b[i];
    res2 += a[i + 1] * b[i + 1];
 }

 for (; i < length; i++) {
    res1 += a[i] * b[i];
 }

 return res1 + res2;
}

