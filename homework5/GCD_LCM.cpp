#include <Rcpp.h>
using namespace Rcpp;

// GCD
int GCD(int a, int b) {
  if (b == 0)
    return a;
  return GCD(b, a % b); 
}

// LCM
int LCM(int a, int b) {
  return (a * b) / GCD(a, b);
}

// [[Rcpp::export]]
int gcd(int a, int b) {
  return GCD(a, b);
}

// [[Rcpp::export]]
int lcm(int a, int b) {
  return LCM(a, b);
}