#include "projecteuler.h"
#include "test.h"

static void llt_getMultiplesSum(void) {
  TEST_CASE_TRUE(getMultiplesSum(3, 5, 10) == 23);
  TEST_CASE_TRUE(getMultiplesSum(3, 5, 1000) == 233168);
}

static void llt_getEvenFibonacciSum(void) {
  TEST_CASE_TRUE(getEvenFibonacciSum(4000000) == 4613732);
}

static void llt_getLargestPrimeFactor(void) {
  TEST_CASE_TRUE(getLargestPrimeFactor(600851475143) == 6857);
}

static void llt_getLargestPalindrome(void) {
  TEST_CASE_TRUE(getLargestPalindrome(2) == 9009);
  TEST_CASE_TRUE(getLargestPalindrome(3) == 906609);
}

// static void llt_getSmallestMultiple(void) {
//   TEST_CASE_TRUE(getSmallestMultiple(10) == 2520);
// }

void projecteuler(void) {
  TEST_CASE_ADD(llt_getMultiplesSum);
  TEST_CASE_ADD(llt_getEvenFibonacciSum);
  TEST_CASE_ADD(llt_getLargestPrimeFactor);
  TEST_CASE_ADD(llt_getLargestPalindrome);
}