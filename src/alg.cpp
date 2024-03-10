// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.0;
  for (int i = 1; i <= n; i++) {
    res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  if (n == 0) {
    return  1;
  } else {
  return n*fact(n-1);
}

double calcItem(double x, uint16_t n) {
  double res;
  res = (pown(x, n) / fact(n));
  return res;
}

double expn(double x, uint16_t count) {
  double res = 0.0;
  for (int i = 0; i <= count; i++) {
    res += calcItem(x, i);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double sres = x;
  for (uint16_t i = 2; i <= count; i++) {
    sres += pown((-1.0), i - 1) * calcItem(x, (i * 2) - 1);
  }
  return sres;
}

double cosn(double x, uint16_t count) {
  double cres = 1.0;
  for (uint16_t i = 2; i <= count; i++) {
    cres += pown((-1.0), i - 1) * calcItem(x, (i * 2) - 2);
  }
  return cres;
}
