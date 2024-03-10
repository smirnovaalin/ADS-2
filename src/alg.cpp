// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
  if (n == 0)
    return 1;
  if (n == 1) {
    return value;
  } else {
    for (int i = 0; i < n; i++) {
      res *= value;
    }
  }
  return res;
}

uint64_t fact(uint16_t n) {
  int res = n;
  if (n == 0) {
    res = 1;
  } else {
    for (int i = 1; i < n; i++) {
      res *= (n - i);
    }
  }
  return res;
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
  double res = 0.0;
  for (uint16_t i = 0; i < count; i++) {
    if (i % 2 == 0) {
      res += calcItem(x, (i * 2) + 1);
    } else {
      res += (-1) * calcItem(x, (i * 2) + 1);
    }
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0.0;
  for (uint16_t i = 0; i < count; i++) {
    if (i % 2 == 0) {
      res +=  calcItem(x, i * 2);
    } else {
      res += (-1) * calcItem(x, i * 2);
    }
  }
  return res;
}
